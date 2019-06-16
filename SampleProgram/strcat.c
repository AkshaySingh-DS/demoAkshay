#include <stdio.h>
void my_strcat(char *dest, char *sur)
{
    (*dest) ? my_strcat(++dest,sur) : (*dest++ = *sur++) ? my_strcat(dest,sur): 0;
}

int main()
{
    char str1[20] ="geeksfor" ;
    char *str2 ="geeks" ;
    my_strcat(str1, str2) ;
    printf("\n\nAfter concatenation : \n");
    printf("%s ",str1) ;
    return 0 ;
}