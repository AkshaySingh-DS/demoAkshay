#include<stdio.h>
int main()
{
    printf("Output of the program:\n\n ");
    int a = (1,2,3);
    printf("%d \n",a);
    //
    int x = 10 ;
	int y = 20 ;
	printf("%d \n",(x, y));
    int z =(++x, x++) ;
	printf("%d ", z);
    //
    int w = 10 , v = 20;
	w, v = 30;    //(w, v) throws error L-value
	printf("\nw = %d  v = %d ", w, v);
    //
    printf("\na = %d ", -(++a)); // L value required as operand as ++(-a)
}