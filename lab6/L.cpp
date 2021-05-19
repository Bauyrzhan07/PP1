#include<iostream>
#include<string>
using namespace std;
bool valid(string s,int n){
    int cnt=0;
    if(n==1)
        for(int i=0;i<s.size();i++)
            if(int(s[i])>47&&int(s[i])<58)
                return true;
    for(int i=1;i<s.size();i++){
        if((int(s[i])>47&&int(s[i])<58)&&(int(s[i-1])>47&&int(s[i-1])<58)){
            if(int(s[i-1])==int(s[i])+1)
                cnt++;
            else if(int(s[i-1])==int(s[i])-1)
                cnt++;
        }
        else if((int(s[i])>47&&int(s[i])<58)&&(int(s[i+1])>47&&int(s[i+1])<58)){
            if(int(s[i])-1==int(s[i+1]))
                cnt++;
            else if(int(s[i])+1==int(s[i+1]))
                cnt++;
        }
    }
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
        cout<<"Valid";
    else
        cout<<"Not valid";
    return 0;
}