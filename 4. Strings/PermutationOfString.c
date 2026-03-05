#include<stdio.h>
#include<string.h>

void perm(char c[],int k)
{
    static int A[10]={0}; //checks the availiblity of string chars!
    static char res[10];
    if(c[k]=='\0'){
        res[k] = '\0';
        printf("%s\n", res);

    }
    else{
        for(int i=0;c[i]!='\0';i++){
            if(A[i]==0)
            {
                res[k]=c[i];
                A[i]=1;
                perm(c,k+1);
                A[i]=0;
            }
        }
    }
}


int main()
{
    char c[]="ASFA";
    perm(c,0);
}