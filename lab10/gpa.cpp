#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int fatt,satt,final,credit,totalcredit;
    double gpa,weight,totalweight=0;
    for(int i=0;i<n;i++){
        cin>>fatt>>satt>>final>>credit;
        int sumatt=fatt+satt;
        if(sumatt<30||final<20)
            gpa=0;
        else{
            int sum=sumatt+final;
            if(sum>=0&&sum<=49) gpa=0;
            if(sum>=50&&sum<=54) gpa=1.0;
            if(sum>=55&&sum<=59) gpa=1+1.0/3.0;
            if(sum>=60&&sum<=64) gpa=1+2.0/3.0;
            if(sum>=65&&sum<=69) gpa=2;
            if(sum>=70&&sum<=74) gpa=2+1.0/3.0;
            if(sum>=75&&sum<=79) gpa=2+2.0/3.0;
            if(sum>=80&&sum<=84) gpa=3;
            if(sum>=85&&sum<=89) gpa=3+1.0/3.0;
            if(sum>=90&&sum<=94) gpa=3+2.0/3.0;
            if(sum>=95&&sum<=100) gpa=4;
        }
        totalweight+=credit*gpa;
        totalcredit+=credit;
    }
    cout<<totalweight/totalcredit;
    return 0;
}