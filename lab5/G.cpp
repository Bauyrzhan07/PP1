#include<iostream>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    bool flag=false;
    int lenght=s.length();
    int lenghtt=t.length();
    if(lenght==lenghtt){
        for(int i=0;i<lenght;i++){
            if(s[i]==t[i])
                flag=true;
            else{
                flag=false;
                break;
            }
        }
    }
    if(flag==true)
        cout<<"YES";
    else 
        cout<<"NO";
}