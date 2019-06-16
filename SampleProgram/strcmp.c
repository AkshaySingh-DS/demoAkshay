
#include <stdio.h>
int my_strcmp(char *a, char *b)
{
    return( (*a == *b && *a=='\0') ? 0: *a == *b ? my_strcmp(++a,++b): 1);
}

int main()
{
    char *str1 ="geeks";
    char *str2 ="geeksfor";
    int res;
    res = my_strcmp(str1, str2);
    if(res==0)
        printf("same ");
    else
        printf("Not same");

    return 0;
}
