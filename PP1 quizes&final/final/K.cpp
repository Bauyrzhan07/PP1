#include<bits/stdc++.h>
using namespace std;
pair<string,string> check(vector<pair<string,string> > vec,string olds,string news){
    bool flag=false;
    for(auto i:vec)
        if(olds==i.second){
            i.second=news;
            flag=true;
            olds=i.first;
            break;
        }
    if(flag==false){
        pair<string,string> ret={olds,news};
        return ret;
    }
    else 
        return check(vec,olds,news);
}   
int main(){
    int n;
    cin>>n;
    vector<pair<string,string> > change;
    for(int i=0;i<n;i++){
        string oldname,newname;
        cin>>oldname>>newname;
        pair<string,string> ins;
        if(i==0)
            ins={oldname,newname};
        else
            ins=check(change,oldname,newname);
        change.push_back(ins);
    }
    for(auto i:change)
        cout<<i.first<<" "<<i.second<<endl;
    return 0;
}