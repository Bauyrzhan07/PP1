#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,lowcase=0,upcase=0;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(int(s[i])>=65&&int(s[i])<=90)
            upcase++;
        else if(int(s[i])>=97&&int(s[i])<=122)
            lowcase++;
    }
    int res1=upcase*a,res2=lowcase*b;
    if(res1>=res2)
        cout<<res2;
    else
        cout<<res1;
    return 0;
}