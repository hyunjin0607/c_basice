//ch13lab1.c

#include <stdio.h>

int main()
{
    int n1 = 0;
    int n2 = 0;

    while(n1 < 3)
    {

       n1 += 1;

        printf("%d ��° ������ �Է��ϼ���: ", n1);
        scanf("%d", &n2);

        printf("�Էµ� ������ %d�Դϴ�.\n", n2);
    }
    return 0;
}
