#define  _CRT_SECURE_NO_WARNINGS 1
#include"practice.h"
#define pi "314159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196"
void yuanzhoushan() 
{
    int height, x = 0;
    scanf_s("%d", &height);
    char a[] = {pi};
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= height - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("%c", a[x]);
            x++;
        }
        printf("\n");
    }
}