#include<stdio.h>
int main(void)
{
    int a = 10,  b = 23;
    while (b>0)
    {
        a++;
        b--;
    }
    printf("Sum = %d " , a);
    return 0;
}