#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int found=-1;
    while(1){
        found=s.find(t,found+1);
        if(found!=string::npos)
            cout<<found<<" ";
        else
            break;
    }
    return 0;
}