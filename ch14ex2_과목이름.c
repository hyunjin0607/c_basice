//ch14ex2_�����̸�.c

#include <stdio.h>

int main()
{
    char sub[10] = "English";
    printf("%s\n", sub);  //sub�� sub[0]�� �ּҴ�, %s�� �ּҺ��� \0���� ���

    char *pSub = "Math";  // ���ڿ� ��� "Math"�ּ� ����
    printf("%s\n", pSub);

    pSub = "Science";  //���ڿ� ���� "Science: �ּ� ����
    printf("%s\n", pSub);

    //sub[10] = "History"; X
    //printf("%s\n", sub); //sub�� sub[0]�� �ּ�, %s�� �ּҺ��� \0���� ���

    char* subject[] = {"English", "Math", "History", "Science"};
    for(int i = 0; i < 4; i++)
    {
        printf("Subject: %s\n", subject[i]);
    }

    return 0;
}
