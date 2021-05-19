#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int max=48;
    for(int i=0;i<s.size();i++){
        if(int(s[i])>max)
            max=int(s[i]);
    }
    cout<<char(max);
    return 0;
}