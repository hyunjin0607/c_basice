//ch10ex3_�ִٵ������.c

#include <stdio.h>

int main()
{
    int scores[5] = {10, 5, 8, 20, 16};
    int assist[5] = {7, 2, 10, 9, 15};
    int max_score = 0;
    int max_index;

    for(int i = 0; i < 5; i++)
    {
        printf("%dȸ�� ��� ����: %2d��, ��ý�Ʈ: %2dȸ\n", i + 1, scores[i], assist[i]);
        if(scores[i] > max_score)
        {
            max_score = scores[i];
            max_index = i;
        }
    }

    printf("�ִٵ��� ���� %dȸ��\n", max_index + 1);
    printf("%d�� ���� %dȸ ��ý�Ʈ\n", max_score, assist[max_index]);


    return 0;
}
