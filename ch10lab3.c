//ch10lab3.c

#include <stdio.h>

int main()
{
    int n1;

    printf("�⵵�� �Է��ϼ���:");
    scanf("%d", &n1);

    if((n1 % 4 ==0 &&  n1 % 100 != 0) || n1 % 400 == 0)
    {
        printf("����̳׿�\n");
    }
    else
    {
        printf("����� �ƴϳ׿�\n");
    }

    return 0;
}
