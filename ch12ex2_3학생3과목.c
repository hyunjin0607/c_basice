//ch12ex2_3�л�3����.c

#include <stdio.h>

int main()
{
    int arr[3][4] = {0};

    for(int i = 0; i < 3; i++)
    {
        printf("%d�� �л��� ��, ��, �� ������ �Է�: ", i + 1);
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n\n");
    printf("��ȣ\t����\t����\t����\t����\n");
    for(int i = 0; i < 3; i++)
    {
        printf("%d��\t", i + 1);
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
