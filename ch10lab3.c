//ch10lab3.c

#include <stdio.h>
#define SIZE   10

int main()
{
    int omr[SIZE] = {2, 3, 4, 5, 5, 3, 4, 1, 1, 3};
    int answer[SIZE] = {2, 3, 4, 2, 5, 4, 1, 1, 2, 1};
    int i;
    int score = 0;

    printf("����: ");
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", answer[i]);
    }


    printf("\n");
    printf("���: ");
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", omr[i]);
    }

    printf("\n");
    printf("ä��: ");
    for(i = 0; i < SIZE; i++)
    {
        char res;
        res = (omr[i] == answer[i]) ? '0' : 'X';
        if(omr[i] == answer[i]) score += 10;

        printf("%c ", res);
    }
    printf("\n\n");

    printf("����: %d��", score);


    return 0;
}
