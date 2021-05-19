#include<bits/stdc++.h>
using namespace std;
void cipher(string s){
    for(int i=0;i<s.size();i++)
        cout<<char(219-int(s[i]));
}
int main(){
    string s;
    cin>>s;
    cipher(s);
    return 0;
}