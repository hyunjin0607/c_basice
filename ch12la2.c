// ch12la2.c

#include <stdio.h>
#define SIZE  10

int main()
{
    int answer[] = {2, 3, 5, 5, 3, 4, 1, 1, 3, 4 };
    int omr[3][10] = {
        {2, 3, 1, 2, 3, 4, 5, 1, 2, 4 },
        {1, 2, 1, 2, 3, 4, 5, 2, 1, 4 },
        {2, 3, 5, 5, 3, 4, 1, 1, 3, 4 }
    };
    int score[3] = {0};
    int i, j;

    printf("����: ");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", answer[i]);
    }
    printf("\n\n");

    for(i = 0; i < 3; i++) //��: �л� ��
    {
        printf("%d ��: ", i + 1);
        for(j = 0; j < 10; j++) //��: ���� ��
        {
            printf("%d ", omr[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    //��� ä��
    for(i = 0; i < 3; i++)
    {
        printf("%d��:" , i + 1);
        for(j = 0; j < 10; j++)
        {
            if(answer[j] == omr[i][j])
            {
                printf("O ");
                score[i] += 10;
            }
            else
            {
                printf("X ");
            }
        }
        printf("\n");
    }
        printf("\n\n");
        printf("����: %d��, %d��, %d��", score[0], score[1], score[3]);

    return 0;

}
