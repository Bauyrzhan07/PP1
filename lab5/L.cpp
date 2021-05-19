#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool flag=false;
    for(int i=1;i<s.size();i++){
        if(int(s[i])>int(s[i-1]))
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