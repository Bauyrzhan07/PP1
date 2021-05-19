#include<iostream>
using namespace std;
int max(string n,int size){
    size--;
    if(size>0){
        int maxim=max(n,size);
        if(int(n[maxim])-48>int(n[size])-48)
            return maxim;
    }
    return size;
}
int main(){
    string n;
    cin>>n;
    cout<<max(n,n.size());
    return 0;
}