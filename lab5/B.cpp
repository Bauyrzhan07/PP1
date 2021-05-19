#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int lenght=s.length();
    for(int i=0;i<lenght;i++){
        if(int(s[i])>96&&s[i]<123)
            s[i]=char(int(s[i])-32);
    }
    cout<<s;
    return 0;
}