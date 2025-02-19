//ch14lab5.c

#include <stdio.h>

int get_max(int, int);

int main()
{
    int n1, n2;
    int m;

    printf("두 수를 입력하세요: ");
    scanf("%d %d", &n1, &n2);

    m = get_max(n1, n2);

    printf("두 수 중에 가장 큰 값은 %d입니다.", m);

}

int get_max(int n1, int n2)
{
    int m;
    if (n1 > n2)
    {
        m = n1;
    }
    else
    {
        m = n2;
    }

    return m;
}

