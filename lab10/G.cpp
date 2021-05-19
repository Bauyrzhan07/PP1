#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    map< pair<string,int>,pair<string,int> > com;
    map< pair<string,int>,pair<string,int> >::iterator it;
    for(int i=0;i<n;i++)
      //  cin>>com.insert(pair<string,int>)
    for(it=com.begin();it!=com.end();it++){
        cout<<(*it).first.first<<" and "<<(*it).second.second;
    }
    return 0;
}