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

   printf("�������� %.1f�� ���� �ѷ��� %.1f�Դϴ�.\n", r, c);
   printf("�������� %.1f�� ���� ���̴� %.1f�Դϴ�.\n", r, s);

   return 0;
}
