#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    map<string,int> list;
    vector<string> cheaters;
    for(int i=0;i<n;i++){
        cin>>s;
        list[s]++;
        if(list[s]==2)
            cheaters.push_back(s);
    }
    if(!cheaters.empty())
        for(int i=0;i<cheaters.size();i++)
            cout<<cheaters.at(i)<<endl;
    else
        cout<<"Understandable, have a great day";
    return 0;
}