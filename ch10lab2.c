//ch10lab2.c

#include <stdio.h>

int main()
{
    int n1;
    int n2;

    printf("���� 2���� �Է��ϼ���:");
    scanf("%d %d", &n1, &n2);

    if(n1 % 2 == 0 && n2 % 2 == 0)
    {
        printf("¦��\n");
    }
    else if(n1 % 2 == 1 && n2 % 2 == 1)
    {
        printf("Ȧ��\n");
    }
    else
    {
        printf("Ȧ¦\n");
    }

    return 0;
}
