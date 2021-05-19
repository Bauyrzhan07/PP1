#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    string x;
    vector<string> factstudents,currentstudents,missed,others;
    for(int i=0;i<n;i++){
        cin>>x;
        factstudents.push_back(x);
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>x;
        currentstudents.push_back(x);
    }
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=0;j<m;j++){
            if(factstudents.at(i)==currentstudents.at(j)){
               flag=true;
               break; 
            }
        }
        if(flag==false){
            missed.push_back(factstudents.at(i));
        }
    }
    for(int i=0;i<m;i++){
        bool flag=false;
        for(int j=0;j<n;j++){
            if(currentstudents.at(i)==factstudents.at(j)){
               flag=true;
               break;
            }
        }
        if(flag==false)
            others.push_back(currentstudents.at(i));
    }
    vector<string>::iterator it;
    cout<<"Missed students:"<<endl;
    for (it=missed.begin();it!=missed.end();it++)
        cout<<"- "<<*it<<endl;
    cout<<"Not in the group:"<<endl;
    for (it=others.begin();it!=others.end();it++)
        cout<<"- "<<*it<<endl;
    return 0;
}