#include<bits/stdc++.h>
#include<set>
using namespace std;
int main(){
    string s;
    set<string> res;
    set<string>::iterator it;
    cin>>s;
    cout<<"The anagram variants for string "<<s<<" are:"<<endl;
    sort(s.begin(),s.begin()+s.size());
    do{
        res.insert(s);
    }while(next_permutation(s.begin(),s.begin()+s.size()));
    for(it=res.begin();it!=res.end();it++)
        cout<<*it<<endl;
    return 0;
}