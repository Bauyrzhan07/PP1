#include<iostream>
#include<string>
using namespace std;
int main(){
    string s,s1;
    cin>>s;
    bool flag=false;
    int lenght;
    s1=s+s[0];
    flag=false;
    if(s1.size()%2==0)
        lenght=s1.size()/2;
    else
        lenght=(s1.size()-1)/2;
    for(int i=0;i<lenght;i++){
        if(s1[i]==s1[s1.size()-i-1])
            flag=true;
        else{
            flag=false;
                break;
        }
    }
    if(flag==true)
        cout<<"YES";
    else if(flag==false)
        cout<<"NO";
    return 0;
}