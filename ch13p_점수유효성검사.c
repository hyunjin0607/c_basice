//ch13p_������ȿ���˻�.c

#include <stdio.h>

int main()
{
    int score = 1;

    do
    {
        printf("������(0~100)�� �Է��ϼ���: ");
        scanf("%d", &score);
    }while(score < 0 || score > 100);

    printf("�Էµ� ������ %d���Դϴ�.\n", score);


    return 0;
}
