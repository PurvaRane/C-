#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int sum(int a,int b){
    return a-b;
}
int main(){
    cout<<"The sum is : "<<sum(3,4);
    cout<<"The diff is : "<<sum(7,5);
    return 0;
    
}