#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> seq,seq1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        seq.push_back(x);
        seq1.push_back(x);
    }
    reverse(seq1.begin(),seq1.end());
    for(int i=0;i<n;i++){
        if(seq.at(i)!=seq1.at(i))
            cout<<"Instead of "<<seq.at(i)<<" here was "<<seq1.at(i)<<endl;
        else
            cout<<"OK"<<endl;      
    }
    return 0;
}