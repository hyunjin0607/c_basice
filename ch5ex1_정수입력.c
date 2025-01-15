//ch5ex1_정수입력.c

#include <stdio.h>

int main()
{

    int n1;
    int n2;

    /*

    printf("정수 1개를 입력하세요:");
    scanf("%d",&n1);
    printf("정수 1개를 입력하세요:");
    scanf("%d",&n2);           // &n1은 변수 n1이 할당 메모리의 주소이다.

    */

    //printf("정수2개를 공백으로구분해 입력하세요:");
    //scanf("%d %d", &n1, &n2);
    printf("정수2개를 공백으로구분해 입력하세요:");
    scanf("%d,%d", &n1, &n2);

    printf("입력된 정수는 %d, %d 입니다.\n", n1, n2);
    printf("n1의 메모리 주소:%p\n", &n1);
    printf("n2의 메모리 주소: %p\n", &n2);

    return 0;
}
