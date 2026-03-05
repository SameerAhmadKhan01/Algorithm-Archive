#include<stdio.h>
#include<string.h>
struct Str
{
    char ar[200];
};

void Toggled(struct Str *s)
{
    for(int i=0;i<strlen(s->ar);i++)
    {
        if(s->ar[i]>=65 && s->ar[i]<=90)
        {
            s->ar[i]+=32;
        }
        else if(s->ar[i]>=97 && s->ar[i]<=122)
        {
            s->ar[i]-=32;
        }
    }
}

int main(){
    printf("Enter a string : \n");
    struct Str st;
    scanf("%s",&st.ar);
    printf("Original string is %s\n",st.ar);
    Toggled(&st);
    printf("Toggled Case String is %s ",st.ar);
}