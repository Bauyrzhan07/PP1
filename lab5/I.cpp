#include<iostream>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++)
        for(int j=0;j<s2.size();j++)
            if(s1[i]==s2[j]){
                s1[i]='0';
                s2[j]='0';
                break;
            }
    if(s1==s2)
        cout<<"YES";
    else
        cout<<"NO";
    
    return 0;
}