#include<iostream>
using namespace std;

int main(){
    string name;
    int age;
    cout<<"Enter your name : ";
    getline(cin,name);
    cout<<"Enter your age : ";
    cin>>age;
    if(age>18 && age<60){
        cout<<"You are an Adult ";
    }
    else if (age>60 && age<80) {
        cout<<"You are a Senior Citizen ";
    }
    else if (age>80) {
        cout<<"You are a Super Senior Citizen";
    }
    else{
        cout<<"You are a kid ";
    }
    return 0;

}