#include<bits/stdc++.h>
using namespace std;
struct student{
    string name,lastname;
    int subjectnum;
    float num=0;
    float denum=0;
    float gpa;
};
bool f(student a,student b){
    if(a.gpa<b.gpa)
        return true;
    else if(a.gpa==b.gpa){
        if(a.lastname==b.lastname){   
            if(a.name>b.name)
                return true;
            else
                return false;
        }
        else if(a.lastname>b.lastname)
            return true;
        else
            return false;
    }
    else
        return false;
}
int main(){
    int n;
    cin>>n;
    student arr[n];
    for(int i=0;i<n;i++){
        string s1,s2;
        int m;
        cin>>s1>>s2>>m;
        arr[i].name=s2;
        arr[i].lastname=s1;
        arr[i].subjectnum=m;
        for(int j=0;j<m;j++){
            string mark;
            int cred;
            cin>>mark>>cred;
            if(mark=="A+")
                arr[i].num+=4.00*cred;
            if(mark=="A")
                arr[i].num+=3.75*cred;
            if(mark=="B+")
                arr[i].num+=3.50*cred;
            if(mark=="B")
                arr[i].num+=3.00*cred;
            if(mark=="C+")
                arr[i].num+=2.50*cred;
            if(mark=="C")
                arr[i].num+=2.00*cred;
            if(mark=="D+")
                arr[i].num+=1.50*cred;
            if(mark=="D")
                arr[i].num+=1.00*cred;
            if(mark=="F")
                arr[i].num+=0.00;
            arr[i].denum+=cred;
        }
        arr[i].gpa=arr[i].num/arr[i].denum;
    }
    sort(arr,arr+n,f);
    cout<<setprecision(3);
    for(int i=0;i<n;i++)
        cout<<arr[i].lastname<<" "<<arr[i].name<<" "<<fixed<<arr[i].gpa<<endl;
    return 0;
}