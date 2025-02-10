//ch12ex2_3학생3과목.c

#include <stdio.h>

int main()
{
    int arr[3][4] = {0};

    for(int i = 0; i < 3; i++)
    {
        printf("%d번 학생의 국, 영, 수 점수를 입력: ", i + 1);
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n\n");
    printf("번호\t국어\t영어\t수학\t총점\n");
    for(int i = 0; i < 3; i++)
    {
        printf("%d번\t", i + 1);
        int s = 0;
        for(int j = 0; j < 3; j++)
        {
            s += arr[i][j];
            printf("%d\t", arr[i][j]);
        }
        arr[i][3] = s;
        printf("%d\t", arr[i][3]);
        printf("\n");
    }
    return 0;
}
