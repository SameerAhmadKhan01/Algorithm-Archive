#include<iostream>
using namespace std;
class Rectangle{
    private:
      int l;
      int b;
    public:
      Rectangle(int a, int b){
        l=a;
        this->b=b;
      }
      int area();
      int perimeter();
      // int ~Rectangle();
};


int Rectangle :: area(){
    return l*b;
}

int Rectangle :: perimeter(){
    return 2*(l+b);
}

// Rectangle:: ~Rectangle();

int main(){
  cout<<"Enter a Length and Breadth : ";
  int l,b;
  cin>>l>>b;
  Rectangle obj(l,b);
  cout<<"Area is : "<<obj.area();
  cout<<"Perimeter is : "<<obj.perimeter();
} 