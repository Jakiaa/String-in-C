#include<stdio.h>
int main()
{
    char s1[20]={"Hi "}, s2[20]={"Jakia"};
    //strcat(s1,s2); //Using String Concatenation function.

    //without concat() fuunction
    int n=strlen(s1);
    int i=0;
    while(s2[i]!='\0')
    {
        s1[n+i]=s2[i];
        i++;
    }
    printf("%s",s1);
    return 0;
}
