#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cnt[10];
    int size=0;
    for(int i=0;i<10;i++)
        cnt[i]=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++)
            if(int(s[j])-48==i)
                cnt[i]++;
        if(cnt[i]>0)
            size++;
    }
    int counter[size],j=0;
    for(int i=0;i<10;i++)
        if(cnt[i]>0){
            counter[j]=cnt[i];
            j++;
        }
    bool flag=false;
    for(int i=1;i<size;i++){
        if(counter[i]==counter[i-1])
            flag=true;
        else{
            flag=false;
            break;
        }
    }
    if(flag==true)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}