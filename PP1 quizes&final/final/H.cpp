#include<bits/stdc++.h>
using namespace std;
int main(){
    string str,key;
    cin>>str>>key;
    char table[26][26];
    for(int i=0;i<26;i++)
        for(int j=0;j<26;j++){
            if(i+97+j<123)
                table[i][j]=char(i+97+j);
            else
                table[i][j]=char(i+97+j-26);
        }
    int i=0;
    while(1){
        key+=key[i];
        i++;
        if(i>=key.size())
            i=0;
        if(key.size()==str.size())
            break;
    }
    string answer;
    for(int i=0;i<str.size();i++)
        answer+=table[int(str[i])-97][int(key[i])-97];
    
    cout<<answer;
    return 0;
}