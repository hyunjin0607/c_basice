// ch10p_��������.c

#include <stdio.h>

int main()
{
    int age;
    printf("���̸� �Է��ϼ���: ");
    scanf("%d", &age);

    if(age >= 20)
    {
        if(age <= 60)
        {
            printf("���� �����ñ���!\n");
        }
    }

    if(age >= 20 && age <= 60)
    {
        printf("���� �����ñ���!\n");
    }

    // 10�̻� 20�̸��� 'û�ҳ��Դϴ�.' ����ϱ�
    if(age >= 10 && age < 20)
    {
        printf("û�ҳ��Դϴ�.\n");
    }

    if(age < 10 || age > 60)
    {
        printf("������Դϴ�.\n");
    }

    return 0;
}
