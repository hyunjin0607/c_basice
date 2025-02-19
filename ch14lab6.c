//ch14lab6.c

#include <stdio.h>

int get_divisor(int);

int main()
{
    int n1;
    int cnt;

    printf("약수를 구할 정수를 입력하세요: ");
    scanf("%d", &n1);

    cnt = get_divisor(n1);

    printf("%d의 약수는 %d개 입니다. ", n1, cnt);

    return 0;
}

int get_divisor(int n)
{
    int cnt = 0;

    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0) cnt++;
    }

    return cnt;
}
