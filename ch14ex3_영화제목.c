//ch14ex3_康拳力格

#include <stdio.h>

int main()
{
    int i;

    char movie1[50];
    char movie2[50];
    char movie3[50];
    char movie4[50];
    char movie5[50];
    char* movie[5] = {movie1, movie2, movie3, movie4, movie5};

    for(i = 0; i < 5; i++)
    {
        printf("#%d. 康拳力格: ", i + 1);
        gets(movie[i]);
    }

    for(i = 0; i < 5; i++)
    {
        puts(movie[i]);
    }

    return 0;
}
