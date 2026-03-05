#include<iostream>
#include<vector>
using namespace std;
int missing(vector<int> A)
{
    int dif=A[0]-0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]-i!=dif)
        {
            return (i+dif);
        }
    }
    return 0;
}

int main(){
    vector<int> A={6,7,8,9,10,11,13,14,15,16,17,18};
    if(missing(A)==0)
    {
        cout<<"No Element is Missing !"<<endl;
    }
    else 
       cout<<"Missing Element is : "<<missing(A);
}