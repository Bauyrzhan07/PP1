#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    char x;
    int n;
    cin>>s>>x>>n;
    int pos=0,cnt=0;
    while(s.find(x,pos)!=string::npos){
        pos=s.find(x,pos)+1;
        cnt++;
    }
    if(cnt==n)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}