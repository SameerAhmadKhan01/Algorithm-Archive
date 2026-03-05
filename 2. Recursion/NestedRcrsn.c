#include<stdio.h>
int fun(int n){
    if(n>100){
        return n-10;
    }
    else{
        return fun(fun(n+10));
    }
}

int main(){
    int n=fun(80);
    printf("%d",n);
    return 0;
}