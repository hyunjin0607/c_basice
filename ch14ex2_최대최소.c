//ch14ex2_�ִ��ּ�.c

#include <stdio.h>

int main()
{
    int i;
    int num;
    int max= -1;
    int min = 999;

    for(i = 0; i < 5; i++)
    {
        printf("%d�� ����: ", i + 1);
        scanf("%d", &num);

        if(num > max)
        {
            max = num;
        }

        if(num < min)
        {
            min = num;
        }
    }

    printf("\n");
    printf("�ִ�: %d, �ּڰ�: %d\n", max, min);

    return 0;
}
