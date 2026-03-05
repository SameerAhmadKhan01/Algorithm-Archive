#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v)
{
    cout<<"Size of vector is : "<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"\t";
    }
    cout<<endl;
}


int main()
{
    vector<int> v;
    cout<<"Enter size of vector : "<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        v.push_back(x);
        printVec(v); //this print fn proves the dynamic size of the vector 
    }
    v.push_back(69);
    printVec(v);
    v.pop_back(); //removes the last element of the vector 
    printVec(v);
}