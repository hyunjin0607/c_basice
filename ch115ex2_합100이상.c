//ch115ex2_��100�̻�.c

#include <stdio.h>
#define TRUE     1

int main()
{
    int num = 1;
    int sum = 0;

    while(TRUE)
    {
        sum += num;
        if(sum >= 100) break;
        num++;
    }

    printf("1~%d������ ���� %d�Դϴ�.\n", num, sum);

    return 0;
}
