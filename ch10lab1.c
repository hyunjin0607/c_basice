//ch10lab1.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n[10];
    int i;
    int s = 0;

    srand(time(NULL));

    for(i = 0; i < 10; i++)
    {
        n[i] = rand() % 100;    // 0~99���� ����
        s += n[i];              //�� ���ϱ�
        printf("%d ", n[i]);    //n[i] ���
    }

    printf("\n");
    printf("���: %d\n", s / 10);

    return 0;
}
