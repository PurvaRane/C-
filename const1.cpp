#include<iostream>
using namespace std;
const int PI = 3.14;
float circle(float radius){
    return PI*radius*radius;

}
int main(){
    float radius = 4;
    cout<<"Enter radius : ";
    cin>>radius ;
    cout<<"Area of circle : "<<circle(radius)<<"\n";
}