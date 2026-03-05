#include<stdio.h>
// int fun(int n){
//     if(n>0){
//         return fun(n-1)+n;
//     }
//     return 0;
// }


int fun2(int n){
  static int x=0;
  if(n>0){
    x++;
    return fun2(n-1)+(x);
  }
}

int main(){
        int a=5;
    printf("%d\n",fun2(5));//output is 46
    // printf("%d\n",fun(5));//output is 55
    return 0;
}

