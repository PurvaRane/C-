#include<iostream>
using namespace std;
int main(){
    char input;
    cout<<"Enter a Alphabet : ";
    cin>>input;
    if(input>=97 && input<=122){
        cout<<"The character is small ";
    }
    else if (input>=65 && input<=90){
        cout<<"The character is capital ";
     }
    else{
        cout<<"Invalid Character !";

    }
    return 0;

}