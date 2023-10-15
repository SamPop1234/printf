#include "main.h"
/**
 *
 *
 *
 */

void my_printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    int format_length = strlen(format);
    for (int i = 0; i < format_length; i++) {
        if (format[i] == '%') {
            // Handle format specifiers
            i++;
            if (i >= format_length)
                break;

            char specifier = format[i];
            switch (specifier) {
                case 's': {
                    const char *str = va_arg(args, const char *);
                    write(1, str, strlen(str));
                    break;
                }
                case 'c': {
                    char c = va_arg(args, int);  // Characters are promoted to int
                    write(1, &c, 1);
                    break;
                }
                case 'f': {
                    double f = va_arg(args, double);
                    char float_str[256];
                    int len = snprintf(float_str, sizeof(float_str), "%f", f);
                    write(1, float_str, len);
                    break;
                }
                case '%': {
                    char percent = '%';
                    write(1, &percent, 1);
                    break;
                }
            }
        } else {
            // Just a regular character, not a format specifier
            write(1, &format[i], 1);
        }
    }

    va_end(args);
    write(1, "\n", 1);  // Add a newline at the end
}

