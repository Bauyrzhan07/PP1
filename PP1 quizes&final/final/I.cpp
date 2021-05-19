#include<bits/stdc++.h>
using namespace std;
int check(string s1,string s2){
    int j=0;
    bool flag;
    for(int i=0;i<s1.size();i++){
        if(s1[i]==s2[j]){
            flag=true;
            j++;
        }
        else if(flag&&s1[i]!=s2[j]){
            flag=false;
            j=0;
        }
    }
    return j;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(s1.find(s2)!=string::npos)
        cout<<s1;
    else if(s2.find(s1)!=string::npos)
        cout<<s2;
    else{
        int start1=check(s1,s2);
        int start2=check(s2,s1);
        string ns1=s1+s2.substr(start1);
        string ns2=s2+s1.substr(start2);
        if(ns1.size()>ns2.size())
            cout<<ns2;
        else
            cout<<ns1;
    }
    return 0;
}