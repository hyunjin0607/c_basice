//ch13ex3_�����ݺ�.c

#include <stdio.h>

int main()
{
    int n1;
    int n2;

    char choice;

    do
    {
        printf("2���� ������ �Է��ϼ���: ");
        scanf("%d %d", & n1, &n2);

        printf("%d + %d = %d\n", n1, n2, n1 + n2);

        printf("�ٸ� ������ �ұ��?(y): ");
        scanf(" %c", &choice);
    }while(choice == 'Y' || choice == 'y');

    return 0;
}
