//ch14lab1.c

#include <stdio.h>

int main()
{
    int n1;
    int n2 = 0;

    for(n1 = 1; n1 <= 500; n1++)
    {
        if(n1 % 3 == 0 || n1 % 5 ==0)
            n2 += n1;
    }
    printf("гу╟Х: %d", n2);

    return 0;
}
