#include<iostream>
using namespace std ;
int main(){
    int a , b ;
    a = 5;
    b = 6;
    a = a + b;  //5+6=11
    b = a - b; //11-6 = 5
    a = a - b; //11-5 = 6
    
    cout<<"a = "<<a<<"\n"<<"b = "<<b;
    return 0;

}