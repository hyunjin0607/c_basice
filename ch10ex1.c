// ch10ex1_�հ�����.c

#include <stdio.h>

int main()
{
    int kor, eng, math;
    int tot, avg;

    printf("����, ����, ���� ������ �������� ������ �Է��ϼ���: ");
    scanf("%d %d %d", &kor, &eng, &math);

    tot = kor + eng + math;
    avg = tot/ 3;

    printf("����: %d��, ���: %d��\n", tot, avg);

    if(avg >= 70)
    {
        if(kor >= 40 && eng >= 40 && math >= 40)
        {
            printf("��� %d������ �հ��Դϴ�.", avg);
        }
        else
        {
            if(kor < 40)
            {
                printf("���� ");
            }
            if(eng < 40)
            {
                printf("���� ");
            }
            if(math < 40)
            {
                printf("���� ");
            }
            printf("������ �����Դϴ�. ���հ��Դϴ�.\n");
            //printf("40�� �̸� ������ �ֳ׿�. ���հ��Դϴ�.\n");
        }
    }
    else
    {
        printf("��� 70���̸����� ���հ��Դϴ�.\n", avg);
    }

    return 0;
}
