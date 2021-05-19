#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=1;i<s.size();i++){
        for(int j=i-1;j>=0;j--){
            if(s[i]==s[j]){
                cout<<s[i];
                break;
            }
        }
    }
    return 0;
}