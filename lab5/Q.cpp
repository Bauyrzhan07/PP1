#include<iostream>
#include<string>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    bool flag=false;
    int pos=0;
    for(int i=0;i<t.size();i+=s.size()){
        if(s==t.substr(i,s.size()))
            flag=true;
        else{
            flag=false;
            break;
        }
           
    }
    if(flag==true)
        cout<<"YES";
    else    
        cout<<"NO";
    
    return 0;
}