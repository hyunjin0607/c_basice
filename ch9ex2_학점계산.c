// ch9ex2_�������.c

#include <stdio.h>

int main()
{
    int score;
    char grade;  // ���� ����

    printf("��� ������ �Է��ϼ���: ");
    scanf("%d", &score);

    if(score >= 90)
    {
        grade = 'A';
    }
    else if(score >= 80)
    {
        grade = 'B';
    }
    else if(score >= 70)
    {
        grade = 'C';
    }
    else if(score >= 60)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }
    printf("%d���� \"%c\"���� �Դϴ�.", score, grade);

    return 0;
}
