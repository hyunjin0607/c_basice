//ch14lab2.c

#include <stdio.h>
int main()
{
    char ob1[50];
    char ob2[50];
    char ob3[50];
    char ob4[50];
    char ob5[50];
    char* ob[5] = {ob1, ob2, ob3, ob4, ob5};
    int num[5];
    int total = 0;

    for(int i = 0; i < 5; i++)
    {
        printf("��ǰ��: ");
        gets(ob[i]);
        printf("����: ");
        scanf("%d", &num[i]);
        getchar();  //���� �Է� �� anter��ȣ�� �޴� ����
    }

    printf("��� ���ǥ");
    printf("\n");
    printf("��ǰ��\t����\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%s\t%d��\n", ob[i], num[i]);
    }
    printf("\n-----------------------\n");
    printf("���������: %d��\n", total);



    return 0;
}
