#include<stdio.h>
int main()
{
    char s[20]={"jakia"},sr[20];
    //strrev(s); //using function
    int i=0,j=0,len;
    len=strlen(s);
    for(j=0,i=len-1;i>=0;i--,j++)
    {
       sr[j]=s[i];
    }
    sr[j]='\0';
    printf("%s\n",s);
    printf("%s\n",sr);

    //Checking Palindrome part.
    int n=strcmp(s,sr);
    if(n==0)
        printf("String is Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
