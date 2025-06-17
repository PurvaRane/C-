#include<iostream>
using namespace std;
int main(){
    int percentage;
    cout<<"Enter Percentage : ";
    cin>>percentage;
    cout<<"GRADE : ";
    if(percentage>80){
        cout<<"A";
    }
    else if (percentage>60){
        cout<<"B";
    }
    else if (percentage>50){
        cout<<"C";
    }
    else if (percentage>45){
        cout<<"D";
    }
    else if (percentage>25){
        cout<<"E";
    }
    else if(percentage<25){
        cout<<"Fail";
    }
    return 0;
    
}