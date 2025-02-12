//ch13p1.c

#include <stdio.h>

int main()
{
    float f;
    float* pF;

    f = 3.14;
    pF = &f;

    printf("pF: %p, pF ÁÖ¼Ò °ª: %f\n", pF, *pF);

    return 0;
}
