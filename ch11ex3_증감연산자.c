//ch11ex3_증감연산자.c

#include <stdio.h>

int main()
{
    int x = 5;
    int y = 3;

    x = x + 1;
    printf("x: %d\n", x);
    x++;
    printf("x: %d\n", x);
    ++x;
    printf("x: %d\n", x);

    printf("++x: %d\n", ++x);
    printf("x++: %d\n", x++);
    printf("x: %d\n", x);

    x = y++;
    printf("x: %d, y: %d\n", x, y);

    x = ++y;
    printf("x: %d, y: %d\n", x, y);

    return 0;
}
