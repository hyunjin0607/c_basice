//ch12p_�޴�����.c

#include <stdio.h>

int main()
{
    int choice;

    printf("-------------------------\n");
    printf("��ȣ�� �����ϼ���.\n");
    printf("1. ���ο� ����ó �߰�\n");
    printf("2.���� ����ó ����\n");
    printf("3.����ó ��ȭ\n");
    printf("4.����ó ���� �޼���\n");
    printf("5.����\n");
    printf("-------------------------\n");

    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        printf("����ó �߰��� �����ϼ̽��ϴ�.\n");
        break;
    case 2:
        printf("����ó ������ �����ϼ̽��ϴ�.\n");
        break;
    case 3:
        printf("����ó ��ȭ�� �����ϼ̽��ϴ�.\n");
        break;
    case 4:
        printf("����ó �޼����� �����ϼ̽��ϴ�.\n");
        break;
    case 5:
        printf("�����մϴ�.\n");
        return 0;
    default:
        printf("��ȣ�� Ȯ���ϼ���.");
    }
    return 0;
}
