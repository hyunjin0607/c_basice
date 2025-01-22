//ch12ex1_등급별성적.c

#include <stdio.h>

int main()
{
    char grade;
    printf("등급을 입력하세요(A ~ F):");
    scanf("%c", &grade);

    switch(grade)
    {
    case 'A': case 'a':
        printf("90점 ~ 100점 사이입니다.\n");
        break;
    case 'B': case 'b':
        printf("80점 ~ 89점 사이입니다.\n");
        break;
    case 'C': case 'c':
        printf("70점 ~ 79점 사이입니다.\n");
        break;
    case 'D': case 'd':
        printf("60점 ~ 69점 사이입니다.\n");
        break;
    case 'F': case 'f':
        printf("0점 ~ 50점 사이입니다.\n");
        break;
    default:
        printf("올바른 등급을 입력하세요.\n");
        break;
    }

    return 0;
}
