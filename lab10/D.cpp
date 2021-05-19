#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool comp(vector<int> i,vector<int> j){
    vector<int>::iterator it;
    int sum1=0,sum2=0;
    for(it=i.begin();it!=i.end();it++)
        sum1+=*it;
    for(it=j.begin();it!=j.end();it++)
        sum2+=*it;
    if(sum1<sum2) return true;
    else if(sum1==sum2){
        if(i.size()<j.size()) return true;
        else if(i.size()==j.size()){
            int greati=0;
            int greatj=0;
            for(int k=0;k<i.size();k++){
                if(i.at(k)>j.at(k))
                    greati++;
                else
                    greatj++;
            }
            if(greati<greatj) return true;
            else return false;
        }
        else return false;
    }
    else return false;
}
int main(){
    int n,m,x;
    cin>>n;
    vector< vector<int> > cont;
    for(int i=0;i<n;i++){
        cin>>m;
        vector<int> subcont;
        for(int j=0;j<m;j++){
            cin>>x;
            subcont.push_back(x);
        }
        cont.push_back(subcont);
        subcont.clear();
    }
    sort(cont.begin(),cont.begin()+n,comp);
    for(int i=0;i<cont.size();i++){
        for(int j=0;j<cont[i].size();j++)
            cout<<cont[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}