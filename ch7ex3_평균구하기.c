// ch7ex3_��ձ��ϱ�.c


/*
3����(python, java, c)������ �Է� �޾�
���(avg)�� ���� ����ϱ�
*/

#include <stdio.h>

int main()
{
    int python;
    int java;
    int c;
    int sum;
    float avg;

    printf("python, java, c������ �������� �����ϼ���:");
    scanf("%d %d %d", &python, &java, &c);

    sum = python + java + c;
    avg = (float)sum / 3;
    printf("\n");
    printf("����: %d��, ���: %.1f��\n", sum, avg);

    return 0;
}
