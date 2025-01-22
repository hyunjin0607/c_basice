//ch11ex4_sizeof.c

#include <stdio.h>

int main()
{
    int x;
    double y;
    char c;

    int size_int;
    int size_double;
    int size_char;

    size_int = sizeof(x);
    size_double = sizeof(y);
    size_char = sizeof(c);

    printf("int: %d byte,", size_int);
    printf("double: %d byte,", size_double);
    printf("char: %d btye\n ", size_char);

    return 0;
}
