//ch12p_메뉴선택.c

#include <stdio.h>

int main()
{
    int choice;

    printf("-------------------------\n");
    printf("번호를 선택하세요.\n");
    printf("1. 새로운 연락처 추가\n");
    printf("2.기존 연락처 편집\n");
    printf("3.연락처 전화\n");
    printf("4.연락처 문자 메세지\n");
    printf("5.종료\n");
    printf("-------------------------\n");

    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        printf("연락처 추가를 선택하셨습니다.\n");
        break;
    case 2:
        printf("연락처 편집를 선택하셨습니다.\n");
        break;
    case 3:
        printf("연락처 전화를 선택하셨습니다.\n");
        break;
    case 4:
        printf("연락처 메세지를 선택하셨습니다.\n");
        break;
    case 5:
        printf("종료합니다.\n");
        return 0;
    default:
        printf("번호를 확인하세요.");
    }
    return 0;
}
