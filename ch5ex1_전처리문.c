//ch5ex1_전처리문.c

#include <stdio.h>
#include "ch5ex1_pp.h"


int main()
{
    int age = 10;
    char first_initial = 'C';
    char last_initial = 'S';

    printf("내 가족은 %s입니다\n", FAMILY_NAME);
    printf("%s가족은 총%d명입니다.\n", FAMILY_NAME, NUM_FAMILY);
    printf("첫 아이 이름은 %c%c이고, 나이는 %d살 입니다.\n", first_initial, last_initial, age);
    printf("첫 아이 이름은 %c%c이고, 나이는 %d살 입니다.\n", first_initial, last_initial, age);


    age = 6;
    first_initial = 'P';
    last_initial  = 's';
    printf("둘쨰 아이 이름은 %c%c이고, 나이는 %d살 입니다.\n", first_initial, last_initial, age);


    return 0;
}
