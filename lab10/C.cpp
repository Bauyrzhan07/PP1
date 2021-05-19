#include<bits/stdc++.h>
using namespace std;
bool issquare(int n){
    for(int i=1;i*i<=n;i++){
        if(i*i==n)
            return true;
    }
    return false;
}
int main(){
    string s;
    cin>>s;
    int i=0;
    while(1){
        if(issquare(stoi(s.substr(i,2)))){
            s.erase(i,2);
            i=0;
        }
        else 
            i++;
        if(i==s.size())
            break;
    }
    if(s.empty())
        cout<<"Stack is empty";
    else{
        reverse(s.begin(),s.end());
        cout<<s;
    }
    return 0;
}