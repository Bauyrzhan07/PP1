#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    bool flag=false;
    cin>>s;
    int lenght=s.length();
    if(lenght%2==0){
        for(int i=0;i<lenght/2;i++){
            if(s[i]==s[lenght-i-1])
                flag=true;
            else{
                flag=false;
                break;
            }
        }
    }
    else{
        for(int i=0;i<(lenght-1)/2;i++){
            if(s[i]==s[lenght-i-1])
                flag=true;
            else{
                flag=false;
                break;
            }
        }
    }
    if(flag==false)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}