//ch14lab2.c

#include <stdio.h>

int main()
{
    int a, b;

    printf("���� 2���� �Է��ϼ���(���� �� ū �� ������): ");
    scanf("%d %d", &a, &b);

    printf("Ȧ����:");
    for(int n1 = a; n1 <= b; n1++)
    {
        if(n1 % 2 == 1)
        {
            printf("%d ", n1);
        }
    }

    return 0;

}
