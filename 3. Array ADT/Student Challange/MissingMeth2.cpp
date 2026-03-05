#include<iostream>
#include<vector>
using namespace std;
class Array
{
    private:
     vector<int> A;
     int size;
    public:
     Array(int size){
        this->size=size;
     }
     void input();
     int getMax();
     int getMin();
     void FindMissing();
};

void Array::input(){
    for(int i=0;i<size;i++)
    {
        int in;
        cout<<"Enter value for A["<<i<<"]: ";
        cin>>in;
        A.push_back(in);
    }
}

int Array::getMax(){
    int max=A[0];
    vector<int>::iterator it;
    for(auto X : A){
        max=(X>max)?X:max;
    }
    return max;
}

int Array::getMin(){
    int min=A[0];
    vector<int>::iterator it;
    for(auto X : A){
        min=(X<min)?X:min;
    }
    return min;
}

void Array::FindMissing()
{
    vector<int> H(getMax()+1,0);
    //increments the present indices!
    for(int i=0;i<size;i++)
    {
        H[A[i]]++;
    }

    //prints the missing elements
    for(int i=getMin();i<getMax();i++)
    {
        if(H[i]==0)  
          cout<<i<<"\t";
    }
    cout<<endl<<"are the missing elements in the List ";
}


int main(){
    cout<<"ENter size of the array : ";
    int size;
    cin>>size;
    Array ar(size);
    ar.input();
    ar.FindMissing();
}