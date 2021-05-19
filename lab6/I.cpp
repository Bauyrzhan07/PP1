#include<iostream>
using namespace std;
void capeven(string s){
    for(int i=0;i<s.size();i++){
        if(i%2==0&&int(s[i])>=97&&int(s[i])<=122)
            cout<<char(int(s[i])-32);
        else 
            cout<<s[i];
    }
}
int main(){
    string s;
    getline(cin,s);
    capeven(s);
    return 0;
}