//ch14ex9_누적합.c

#include <stdio.h>
#define SIZE  5

int summarr(int *);

int main()
{
    int cnt[SIZE] = {10, 22, 33, 55, 77};
    int s;

    s = sumarr(cnt);
    printf("개수 총 합: %d개\n", s);

    return 0;
}

int sumarr(int *arr)
{
    int s = 0;
    for(int i = 0; i < SIZE; i++)
    {
        s += arr[i];
    }

    return s;
}

