//ch17ex_�迭�ʱ�ȭ.c

#include <stdio.h>
#define ARR_SIZE 5

int main()
{
    int i;
    int s = 0;
    int num[5];

    for(i = 0; i < ARR_SIZE; i++)
    {
        printf("%d��° ���� �Է�: ", i + 1);
        scanf("%d", &num[i]);
    }
    for(i = 0; i < ARR_SIZE; i++)
    {
        printf("num[%d] = %d\n", i, num[i]);
        s += num[i];
    }
    printf("�迭 num�� �հ�� %d�Դϴ�.\n", s);

    return 0;
}
