//ch11ex2_문자열교환.c

#include <stdio.h>
#include <string.h>

int main()
{
    char season1[20] = "Spring";
    char season2[20] = "Fall";

    printf("season1: %s\n", season1);
    printf("season2: %s\n", season2);


    strcpy(season2, "Summer");
    printf("season2: %s\n", season2);

    strcpy(season1, "Winter");
    printf("season1: %s\n", season1);

    return 0;

}
