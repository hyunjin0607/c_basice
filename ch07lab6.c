//ch07lab6.c

#include <stdio.h>

int main()
{
    char n1;

    printf("���� �ҹ��ڸ� �Է��ϼ���:");
    scanf("%d", &n1);

    if (n1 == 'a' || n1 == 'e' || n1 == 'i' || n1 == 'o' || n1 == 'u')
    {
        printf("%d�� �����Դϴ�.", n1);
    }
}
