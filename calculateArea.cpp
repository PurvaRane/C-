#include<iostream>
using namespace std;
inline float areaOfTriangle(int base,int height){
    return(0.5*base*height);
}
int main(){
    int base ,height;
    cout<<"Enter base : ";
    cin>>base;
    cout<<"Enter height : ";
    cin>>height;
    cout<<"Area : "<<areaOfTriangle(base,height);
    return 0;
    
}