#include<iostream>
using namespace std;
int factorial(int n){
    int  fact = 1;
    for(int i=1;i<=n;i++){
            fact*=i; //fact = fact*i;
        }
        return fact;
}

int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
      cout<<"Factorial : "<<factorial(n);
    return 0;
}
//recursion is the situation where the func calls itself 
//it means one of the func in the defination it makes a call to the same func in which it is present 






