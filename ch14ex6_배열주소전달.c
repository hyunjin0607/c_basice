//ch14ex6_배열주소전달.c

#include <stdio.h>
#define ARRSIZE 5

int main()
{
   int arr[ARRSIZE];
   for(int i = 0; i < ARRSIZE; i++)
   {
       arr[i] = 10 * i + 10 ;
   }

   printf("함수 실행전 arr-----------\n");
   printArr(arr);
   twiceArr(arr);
   printf("함수 샐행 후 arr -------------\n");
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

    printf("twiceArr 함수  arr----------\n");
    printArr(pArr);
}

