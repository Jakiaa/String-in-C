#include<stdio.h>
int main()
{
    char s1[20]={"'Hi'"},s2[20]={"'Hello'"};
int n=strcmp(s1,s2);
    if(n==0)
        printf("%s is same as %s",s1,s2);
    else
        printf("Not same");
    return 0;
}
