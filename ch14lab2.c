//ch14lab2.c

#include <stdio.h>
int main()
{
    char ob1[50];
    char ob2[50];
    char ob3[50];
    char ob4[50];
    char ob5[50];
    char* ob[5] = {ob1, ob2, ob3, ob4, ob5};
    int num[5];
    int total = 0;

    for(int i = 0; i < 5; i++)
    {
        printf("물품명: ");
        gets(ob[i]);
        printf("수량: ");
        scanf("%d", &num[i]);
        getchar();  //수량 입력 후 anter기호를 받는 역할
    }

    printf("재고 목록표");
    printf("\n");
    printf("물품명\t수량\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%s\t%d개\n", ob[i], num[i]);
    }
    printf("\n-----------------------\n");
    printf("총제고수량: %d개\n", total);



    return 0;
}
