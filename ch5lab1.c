//ch5lab1.c

#include <stdio.h>
#include "ch5ex1.h"

int main()
{
   float r = 5.0;
   float s;
   float c;

   s = PI * r * r;
   c = 2 * PI * r;

   printf("반지름이 %.1f인 원의 둘레는 %.1f입니다.\n", r, c);
   printf("반지름이 %.1f인 원의 넓이는 %.1f입니다.\n", r, s);

   return 0;
}
