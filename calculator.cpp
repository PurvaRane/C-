#include<iostream>
using namespace std;
int main(){
    int a , b ;
    char op;
    cout<<"Enter Operand 1 : ";
    cin>>a;
    cout<<"Enter Operator : ";
    cin>>op;
    cout<<"Enter Operand 2 : ";
    cin>>b;

    switch(op) {
    case '+': cout<<"Sum is "<<a+b;
    break;
    case '-': cout<<"  Difference is "<<a-b;
    break;
    case '*': cout<<"Multiplication is "<<a*b;
    break;
    case '/' : cout<<"Division is "<<a/b;
    break;
    case '%' : cout<<"Modulo is "<<a%b;
    break;
    default : cout<< "Not a valid operator ";
    }
    return 0;
}
