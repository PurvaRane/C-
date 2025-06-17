#include<iostream>
using namespace std;
int main (){
    int t1=0,t2=1,n,i=0;
    cout<<"Enter Number : ";
    cin>>n;
    cout<<"Fibonacci series : \n";
    
    while(i<n){
        int nextt;
        nextt = t1;
        t1 = t2;
        t2 = nextt;


         int nt = nextt+i;

         i++;

    }
    return 0;
}
