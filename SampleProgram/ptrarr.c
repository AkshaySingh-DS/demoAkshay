
#include <stdio.h>

int main()
{
    int arr[5]={1,2,3,4,5};
    int i;
    int *p = arr; //&arr[0];
    printf("Sizeof(p) = %d  and sizeof(*p)= %d  \n", sizeof(p),sizeof(*p));

    for(i=0;i<5;i++){
        printf("%u and arr[%d] = %d    \n", p, i, *p);
        p++;
    }
    return 0;
}
