#include<iostream>
using namespace std ;

    //global const defination 
    #define  pi 3.14 ; 
  
int main(){
    float radius = 4;
    cout<<"Area of circle : "<<circle(radius)<<"\n";
    return 0;

}
  float circle (float radius)
{
    float area = pi*radius*radius ;
    return area ;
}

