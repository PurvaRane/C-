#include<iostream>
using namespace std;
int main(){
    float p,r,n;
    cout<<"Enter Principal amount : ";
    cin>>p;
    cout<<"Enter Rate : ";
    cin>>r;
    cout<<"Enter Time Period : ";
    cin>>n;
    cout<<"Simple Intrest : "<<(p*n*r)/100;
    return 0;

}
