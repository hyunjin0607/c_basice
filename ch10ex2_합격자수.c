//ch10ex2_�հ��ڼ�.c

#include <stdio.h>
#define ARR_SIZE 5

int main()
{
    //int scores[5] = {77, 88, 66, 83, 92};
    int scores[ARR_SIZE];
    int cnt = 0;
    int max_scores = 0;

    for(int i = 0; i < ARR_SIZE; i++)
    {
        printf("%d�� ������? ", i + 1);
        scanf("%d ", &scores[i]);

    }

    for(int i = 0; i < ARR_SIZE; i++)
    {
         printf("%d�� %d�� ", i + 1, scores[i]);
        if(scores[i] >= 80)
        {
            printf("�հ�\n");
            cnt++;
        }

        else
        {
            printf("���հ�\n");
        }

        if(scores[i] >= max_scores)
        {
            max_scores = scores[i];
        }
    }

    printf("\n--------------------------\n");
    printf("80�� �̻����� �հ��� �л��� %d���Դϴ�.\n", cnt);
    printf("�ְ� ����: %d��\n", max_scores);

    return 0;
}
