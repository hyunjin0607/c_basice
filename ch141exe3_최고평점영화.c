//ch141exe3_최고평점영화.c

#include <stdio.h>

int main()
{
    int i;
    char ans;
    char *movies[5] = {
        "Mission impossible",
        "Incredible",
        "Avengers",
        "Frozen",
        "Big Hero"
    };
    int movie_rating[5];
    int max_rate = 0;
    char* max_rate_movie;

    for(i = 0; i < 5; i++)
    {
        printf("%s 영화를 보셨나요(y/n)?" ,movies[i]);
        scanf(" %c", &ans);
        if(ans == 'y')
        {
            printf("평점을 입력하세요(1 ~10): ");
            scanf("%d", &movie_rating[i]);
        }
        else
        {
            movie_rating[i] = -1;
        }
        if(movie_rating[i] > max_rate)
        {
            max_rate = movie_rating[i];
            max_rate_movie = movies[i];
        }
    }

    printf("\n\n영화 평점표\n");
    printf("-------------------------\n");
    for(i = 0; i < 5; i++)
    {
        if(movie_rating[i] > 0)
        {
            printf("%s\t%d점\n", movies[i], movie_rating[i]);
        }
    }


    printf("----------------------\n");
    printf("최고의 영화는 %s(%d점) 입니다.\n", max_rate_movie, max_rate);

    return 0;
}
