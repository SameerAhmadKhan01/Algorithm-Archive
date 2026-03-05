#include<bits/stdc++.h>
using namespace std;

int main()
{
    //making a normal pair 
    pair<string,int> p;
    p=make_pair("SAMEER",46);
    cout<<p.first<<"\t"<<p.second<<endl;
    
    

    //making a nested pair 
    pair<string,pair<string,int>> p1;  //first value is the first name and in the second pair first is last name and second value is roll number 
    p1=make_pair("SAMEER",make_pair("AHMAD",46));
    cout<<p1.first<<" "<<p1.second.first<<"-"<<p1.second.second<<endl;
    // cout<<p1.second;  throws error as second one is not specified which one to print


    //why do we actually need pair? => to make a relation between 2 things
    //example relation relation between indices of 2 arrays 
    int a[]={1,2,3}; //array a
    int b[]={1,4,9}; //array b = a^2
    //lets create a pair array to make a relation between these 2
    pair<int,int> p_array[3];
    p_array[0]=make_pair(1,1);
    p_array[1]=make_pair(2,4);
    p_array[2]=make_pair(3,9);
    //above the pair array is created!
    //iterating and printing the vals
    for(int i=0;i<3;i++)
    {
       cout<<p_array[i].first<<"\t"<<p_array[i].second<<endl;
    }
    return 0;
}