//ch13ex1_������.c

#include <stdio.h>

int main()
{
    int num;
    int cnt = 0;
    int sum = 0;

    while (cnt < 5)
    {
        printf("�����Է�");
        scanf("%d", &num);

        sum += num;

        printf("num: %d, sum: %d \n", num, sum);
        cnt++;
    }

    printf("\n---------------------------\n");
    printf("�հ�:%d \n", sum);

    return 0;
}
