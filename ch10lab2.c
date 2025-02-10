//ch10lab2.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE    10

int main()
{
    int i;
    int scores[SIZE];
    int max, min;

    srand(time(NULL)); //���� �õ� �� �ʱ�ȭ


    // 10���� ���� �ʱ�ȭ
    for(i = 0; i < SIZE; i++)
    {
        scores[i] = rand() % 101;
    }


    // 1.�ְ���, ������ ã��
    // 2. �ְ�, ���� ������ �л� ��ȣ ����ϱ�
    max = min = scores[0];
    for(i = 0; i < SIZE; i++)
    {

        if(scores[i] > max) max = scores[i];
        if(scores[i] < min) min = scores[i];
    }


    // 10�� ���� ���
    printf("����: ");
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", scores[i]);
    }
    printf("\n");

    printf("�ִ��� %d,�ּڰ��� %d�Դϴ�.\n", max, min);

    return 0;
}
