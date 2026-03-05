#include<iostream>
using namespace std;
class ArrCreation{
    public:
     int ar[10];
    public:
     ArrCreation(){
        cout<<"\n";
     }
     void input();
     void display();
     void modify();
};

void ArrCreation::input(){
    for(int i=0;i<10;i++){
        cout<<"Enter a value for ar["<<i<<"]"<<endl;
        cin>>ar[i];
    }
}

void ArrCreation::display(){
    for(int i=0;i<10;i++){
        cout<<i[ar]<<"\t";
    }
    cout<<"\n";
}

void ArrCreation::modify(){
    cout<<"Enter an index whose element is to be changed : ";
    int ind;
    cin>>ind;
    cout<<"Enter a value to be enetered : ";
    int val;
    cin>>val;
    ind[ar]=val;
}

int main(){
   ArrCreation ar;
//    cout<<ar.ar[0]; //prints garbage value 
   ar.input();
   ar.display();
   ar.modify();
   ar.display();
}

