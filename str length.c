#include<stdio.h>
int main()
{
    char s[30]={"jakia"};
    int len;
    //len=strlen(s); // Using build in string length function 'strlen()'.

    //Find length by using loop.
    len=0;
    int i=0;
    while(s[i]!='\0')
    {
        len++;
        i++;
    }
    printf("%d",len);
    return 0;
}
