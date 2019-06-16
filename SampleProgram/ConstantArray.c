#include<stdio.h>
int main()
{
    const int vector[] = {1,2,3,4,5};
    int * ptr = &vector[0];
    for (int i = 0; i < sizeof(vector)/sizeof(int) ; i++)
        printf("%d  ", *(ptr+i));
    //*(ptr+0) = 10; 
    //printf("\n%d ",vector[0]);
    return 0;
}