#include<bits/stdc++.h>
using namespace std;


//prints vector of pairs
void printVec(vector<int> &v)
{
    // cout<<"Size of vector is : "<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"\t";
    }
    cout<<endl;
}




//print vectors of vectors 
void printVecOfVec(vector<vector<int>> v)
{
    for(int i=0;i<v.size();i++)
    {
      printVec(v[i]);
    }
    cout<<endl;
}








int main()
{
  //vector of pairs
//   vector<pair<int,int>> v={{1,2},{3,4},{5,6}};
//   printVec(v);
//   v.push_back(make_pair(69,70));
//   printVec(v);
//   v.pop_back();
//   printVec(v);


  //vector of vectors
  vector<vector<int>> v1;
  cout<<"Enter size of Vector Rows : ";
  int rows;
  cin>>rows;
  for(int i=0;i<rows;i++)
  {
     int cols;
     cin>>cols;
     vector<int> temp;
     for(int j=0;j<cols;j++)
     {
        int x;
        cin>>x;
        temp.push_back(x);
     }
     v1.push_back(temp);
  }
  printVecOfVec(v1);
  cout<<v1[0][1];

}
