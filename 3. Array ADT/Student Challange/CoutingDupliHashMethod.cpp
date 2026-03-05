#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

void duplicate(vector<int> v)
{
    vector<int> h(8,0);
    for(int i=0;i<v.size();i++)
    {
        h[v[i]]++;
    }
    //displaying the frequency along with the duplicates
    printf("Digit\t\tFrequency\n");
    for(int i=1;i<h.size();i++)
    {
         cout<<i<<"\t\t"<<h[i]<<endl;
    }
   
}


void dispFreq(vector<int> ar)
{
    int j;
    for(int i=0;i<ar.size()-1;i++)
    {
         if(ar[i]==ar[i+1])
         {
            j=i+1;
            while(ar[j]==ar[i]) j++;
            cout<<ar[i]<<" is appearing "<<(j-i)<<" times\n";
            i=j-1;
         }
    }
}

int main()
{
    vector<int> ar={1,2,2,2,3,4,5,6,7,7};
    // int lastDigit=0;
    // for(int i=0;i<10;i++)
    // {
    //     if(ar[i]==ar[i+1] && ar[i]!=lastDigit)
    //     {
    //         lastDigit=ar[i];
    //         printf("%d\n",ar[i]);
    //     }
    // }
    // duplicate(ar);
    dispFreq(ar);
}

