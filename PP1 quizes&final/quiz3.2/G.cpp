#include<bits/stdc++.h>
using namespace std;
char bigboss(string s,int pos){
    if(pos<s.size()){
        if(s[pos]>=65&&s[pos]<=90)
            return s[pos];
        else
            return bigboss(s,pos+1);
    }
    else
        return 1;
}
int main(){
    string s;
    cin>>s;
    if(bigboss(s,0)==1)
        cout<<"-1";
    else
        cout<<bigboss(s,0);
    return 0;
}