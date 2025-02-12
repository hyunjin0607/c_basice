//ch14ex2_성적표

#include <stdio.h>

int main()
{
    int score[3] = {90, 70, 85};
    char* name[3] = {"홍길동", "김철수", "박영희"};


    printf("이름\t성적\n");
    printf("---------------\n");
    for(int i = 0; i < 3; i++)
    {
        printf("%s\t%d\n", name[i], score[i]);
    }

    // X *name[0] ="김"; 포인터 역참조 변경 불가
    return 0;
}
