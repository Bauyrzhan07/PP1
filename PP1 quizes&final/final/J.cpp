#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int cnt=0;
    if(s1==s2)
        cout<<cnt;
    else{
        for(int i=0;i<s1.size();i++){
            char c=s1[0];
            s1[0]=s1[s1.size()-1];
            for(int j=1;j<s1.size();j++){
                char s=s1[j];   
                s1[j]=c;
                c=s;
            }
            cnt++;
            if(s1==s2)
                break;
        }
        if(cnt==s1.size())
            cout<<"Understandable have a nice day";
        else
            cout<<cnt; 
    }
    
    return 0;
}