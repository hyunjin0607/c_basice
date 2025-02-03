//ch14ex1_n단출력.c

#include <stdio.h>

int main()
{
    int n;
    int i;

    printf("몇 단을 출력할까요? ");
    scanf("%d", &n);

    for(i = 1; i <= 9; i++)
    {
        printf("%02d * %02d = %02d\n", n, i, n * i);
    }
    return 0;
}
