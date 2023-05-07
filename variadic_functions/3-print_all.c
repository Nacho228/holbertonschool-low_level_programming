#include "variadic_functions.h"
/**
 * print_all - function that prints anything.
 * @format: is a list of types of arguments passed to the function.
 * Return: void.
*/
void print_all(const char * const format, ...)
{
    const char *buffer = NULL, *str = NULL;
    int i = 0, val;
    double aux;
    va_list args;
    va_start(args, format);

    buffer = format;

    while(buffer[i] != '\0')
    {
        if(buffer[i] == 'c')
        {
            val = va_arg(args, int);
            printf("%c", val);
        }
        else if (buffer[i] == 'i')
        {
            val = va_arg(args, int);
            printf("%d", val);
        }
        else if (buffer[i] == 'f')
        {
            aux = va_arg(args, double);
            printf("%f", aux);
        }
        else if(buffer[i] == 's')
        {
            str = va_arg(args, char *);
            printf("%s", str);
        }
        
        i++;
    }
    if (str == NULL)
        printf("(nil)");
            else
        printf("%s", str);
    printf("\n");
va_end(args);
}