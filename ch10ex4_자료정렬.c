//ch10ex4_�ڷ�����.c
// bubble sort(��ǰ ����)�� �������� ����

#include <stdio.h>
#define MAX 5

int main()
{
    int i, j;
    int temp;
    int num[MAX] = {93, 75, 50, 32, 16};

    for(i = 0; i < MAX - 1; i++)
    {
        for(j = 0; j < MAX - 1 - i; j++)
        {
            if(num[j] > num[j + 1]);
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    printf("������ �迭 num:");
    for(i = 0; i <MAX; i++)
    {
        printf("%d ", num[i]);
    }

    printf("\n");

    return 0;
}
