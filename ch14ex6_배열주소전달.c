//ch14ex6_�迭�ּ�����.c

#include <stdio.h>
#define ARRSIZE 5

int main()
{
   int arr[ARRSIZE];
   for(int i = 0; i < ARRSIZE; i++)
   {
       arr[i] = 10 * i + 10 ;
   }

   printf("�Լ� ������ arr-----------\n");
   printArr(arr);
   twiceArr(arr);
   printf("�Լ� ���� �� arr -------------\n");
   printArr(arr);
   return 0;
}

void printArr(int* pArr)
{
    for(int i = 0; i <ARRSIZE; i++)
    {
        printf("%d", pArr[i]);
    }
    printf("\n");
}

void twiceArr(int* pArr)
{
    for(int i = 0; i < ARRSIZE; i++)
    {
        pArr[i] *= 2;
    }

    printf("twiceArr �Լ�  arr----------\n");
    printArr(pArr);
}

