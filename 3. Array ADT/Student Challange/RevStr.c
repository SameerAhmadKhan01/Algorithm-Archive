#include<stdio.h>
#include<string.h>
int main()
{
    char s[]="SAMEER";
    printf("Original String : %s\n",s);
    int x=0,i=strlen(s)-1;
    while(x<i)
    {
        char temp=s[x];
        s[x++]=s[i];
        s[i--]=temp;
    }
    printf("Reversed String : %s\n",s);
}