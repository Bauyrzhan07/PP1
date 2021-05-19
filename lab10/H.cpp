#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int> seq;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        seq.insert(x);
    }
    set<int>::iterator it;
    do{
        for(it=seq.begin();it!=seq.end();it++)
            cout<<*it<<" ";
        cout<<endl;
    }while(next_permutation(seq.begin(),seq.begin()+seq.size()));
}