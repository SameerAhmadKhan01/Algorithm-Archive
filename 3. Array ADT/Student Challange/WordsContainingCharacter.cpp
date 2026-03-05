#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<int> findWordsContaining(vector<string>& words, char x)
{
    vector<int> indices;
    bool present=false;
    for(int i=0;i<words.size();i++)
    {
        for(int j=0;j<words[i].length();j++)
        {
            if(words[i].at(j)==x){
               indices.push_back(i);
               break;}
        }
    }
    return indices;
}

int main(){
    vector<string> v{"Sameer","asfa","maria","kk"};
    vector<int> p=findWordsContaining(v,'a');
    cout<<"[";
    for(auto x:p){
        cout<<x<<",";
    }
    cout<<"]";
}