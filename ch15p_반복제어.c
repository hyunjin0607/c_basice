//ch15p_�ݺ�����.c

#include <stdio.h>

int main()
{
    int i;

    for(i = 1; i <= 10; i++)
    {
        //if (i == 5) break;
        if(i == 5) continue; //i�� 5�� �Ʒ� �ڵ带 �������� �ʰ� �ݺ�
        printf("i: %d\n", i);
    }

    return 0;
}
