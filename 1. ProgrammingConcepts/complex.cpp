#include<iostream>
#include<stdio.h>
using namespace std;
struct complex
{
    int real;
    int img;
};

//a complex number is represented as x+iy where x,y belongs to integer while iy is purely imaginary part and x alone is purely real form 
int main(){
    struct complex c;
    printf("Enter real part of the complex number : ");
    cin>>c.real;
    printf("Enter imaginary part of the complex number : ");
    cin>>c.img;
    cout<<"The complex number in its traditional representation : \n";
    printf("%d + i%d",c.real,c.img);

}
