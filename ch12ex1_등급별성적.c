//ch12ex1_��޺�����.c

#include <stdio.h>

int main()
{
    char grade;
    printf("����� �Է��ϼ���(A ~ F):");
    scanf("%c", &grade);

    switch(grade)
    {
    case 'A': case 'a':
        printf("90�� ~ 100�� �����Դϴ�.\n");
        break;
    case 'B': case 'b':
        printf("80�� ~ 89�� �����Դϴ�.\n");
        break;
    case 'C': case 'c':
        printf("70�� ~ 79�� �����Դϴ�.\n");
        break;
    case 'D': case 'd':
        printf("60�� ~ 69�� �����Դϴ�.\n");
        break;
    case 'F': case 'f':
        printf("0�� ~ 50�� �����Դϴ�.\n");
        break;
    default:
        printf("�ùٸ� ����� �Է��ϼ���.\n");
        break;
    }

    return 0;
}
