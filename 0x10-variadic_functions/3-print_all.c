#include <stdio.h>

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
    unsigned int i = 0;
    va_list args;
    char *str;

    va_start(args, format);

    while (format && format[i])
    {
        switch (format[i])
        {
            case 'c':
                printf("%c", va_arg(args, int));
                break;
            case 'i':
                printf("%d", va_arg(args, int));
                break;
            case 'f':
                printf("%f", va_arg(args, double));
                break;
            case 's':
                str = va_arg(args, char *);
                if (str)
                {
                    printf("%s", str);
                    break;
                }
                printf("(nil)");
                break;
            default:
                i++;
                continue;
        }

        if (format[i + 1])
            printf(", ");

        i++;
    }

    va_end(args);
    printf("\n");
}
