//ch5ex1_�����Է�.c

#include <stdio.h>

int main()
{

    int n1;
    int n2;

    /*

    printf("���� 1���� �Է��ϼ���:");
    scanf("%d",&n1);
    printf("���� 1���� �Է��ϼ���:");
    scanf("%d",&n2);           // &n1�� ���� n1�� �Ҵ� �޸��� �ּ��̴�.

    */

    //printf("����2���� �������α����� �Է��ϼ���:");
    //scanf("%d %d", &n1, &n2);
    printf("����2���� �������α����� �Է��ϼ���:");
    scanf("%d,%d", &n1, &n2);

    printf("�Էµ� ������ %d, %d �Դϴ�.\n", n1, n2);
    printf("n1�� �޸� �ּ�:%p\n", &n1);
    printf("n2�� �޸� �ּ�: %p\n", &n2);

    return 0;
}
