#include<stdio.h>
int main(void)
{
    int intType;
    float floatType;
    longint longintType;
    longlongint longlongintType;
    char charType;

printf("Size of char: %zu bytes\n", sizeof(charType));
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of longint: %zu bytes\n", sizeof(longintType));
printf("Size of longlongint: %zu byte\n", sizeof(longlongintType));
printf("Size of float: %zu bytes\n", sizeof(floatType));

return (0);
}
