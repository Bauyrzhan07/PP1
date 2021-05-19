#include<iostream>
using namespace std;
bool valid(string s,int n){
    int cnt=0;
    for(int i=0;i<s.size();i++)
        if(s[i]>47&&s[i]<58)
            cnt++;
    if(cnt>=n)
        return true;
    else
        return false;
    
}
int main(){
    string s;
    int n;
    cin>>s>>n;
    if(valid(s,n))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}