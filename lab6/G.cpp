#include<iostream>
using namespace std;
void remove(string s){
    bool flag;
    for(int i=0;i<s.size();i++){
        flag=false;
        if(s[i]=='a'||s[i]=='A')
            flag=true;
        if(s[i]=='o'||s[i]=='O')
            flag=true;
        if(s[i]=='i'||s[i]=='I')
            flag=true;
        if(s[i]=='e'||s[i]=='E')
            flag=true;
        if(s[i]=='u'||s[i]=='U')
            flag=true;
        if(flag==false)
            cout<<s[i];
    }
}
int main(){
    string s;
    getline(cin,s);
    remove(s);
    return 0;
}