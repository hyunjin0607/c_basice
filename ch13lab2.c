//ch13lab2.c

#include <stdio.h>

int main()
{
    int n1 = 1;
    int n2;
    int n3 = 0;

    printf("������ �Է��ϼ���:");
    scanf("%d", &n2);

    while(n1 <= n2)
    {
        n3 += n1;
        n1++;
    }

    printf("1 ~ %d������ �հ�� %d", n2, n3);

    return 0;

}
