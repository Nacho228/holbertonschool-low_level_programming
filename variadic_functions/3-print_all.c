#include <stdio.h>
#include <stdarg.h>

void print_all(const char* const format, ...) {
    char c;
    int i;
    double d;
    char* s;
    const char *separator = ", ";
    
    const char* p = format;
    va_list args;
    va_start(args, format);

    while (*p) {
        switch (*p) {
            case 'c':
                c = (char) va_arg(args, int);
                printf("%c", c);
                printf("%s", separator);
                break;

            case 'i':
                i = va_arg(args, int);
                printf("%d", i);
                printf("%s", separator);
                break;

            case 'f':
                d = va_arg(args, double);
                printf("%f", d);
                printf("%s", separator);
                break;

            case 's':
                s = va_arg(args, char*);
                if (s == NULL) {
                    printf("(nil)");
                    printf("%s", separator);
                } else {
                    printf("%s", s);
                }
                break;

            default:
                break;
        }

        p++;
    }

    va_end(args);
    printf("\n");
}
