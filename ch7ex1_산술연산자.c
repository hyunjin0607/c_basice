// ch7ex1_산술연산자.c

#include <stdio.h>

int main()
{
    int n1 = 10;
    int n2 = 3;

    printf("%d + %d = %d\n", n1, n2, n1 + n2);
    printf("%d - %d = %d\n", n1, n2, n1 - n2);
    printf("%d * %d = %d\n", n1, n2, n1 * n2);
    printf("%d / %d = %d\n", n1, n2, n1 / n2);
    printf("%d %% %d = %d\n", n1, n2, n1 % n2); // %출력시 %%

    return 0;
}
