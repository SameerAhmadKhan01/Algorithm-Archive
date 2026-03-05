/* Input: prices = [7,1,5,3,6,4]
Output: 5*/
#include<vector>
#include<iostream>
using namespace std;
int BestTimeToBuyAndSellStock(vector<int> p)
{
    int min=p[0];
    int maxProfit=0;
    for(int i=1;i<p.size();i++)
    {
      
          if(p[i]-min>maxProfit) maxProfit=p[i];
            if(p[i]<min) min=p[i];
    }
    return maxProfit;
}

int main()
{
    vector<int> p={1,2};
    cout<<BestTimeToBuyAndSellStock(p);
}