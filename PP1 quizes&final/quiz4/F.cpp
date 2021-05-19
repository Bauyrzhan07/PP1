#include<iostream>
#include<map>
using namespace std;
int main(){
    string s,res;
    int maxsize=0;
    while(cin>>s)
        if(s.size()>maxsize){
            res=s;
            maxsize=s.size();
        }
    cout<<res;
    return 0;
}