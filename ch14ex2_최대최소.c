//ch14ex2_최대최소.c

#include <stdio.h>

int main()
{
    int i;
    int num;
    int max= -1;
    int min = 999;

    for(i = 0; i < 5; i++)
    {
        printf("%d번 점수: ", i + 1);
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
    printf("최댓값: %d, 최솟값: %d\n", max, min);

    return 0;
}
