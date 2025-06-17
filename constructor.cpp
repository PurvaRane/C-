#include<iostream>
using namespace std;
class Circle
{
  private : 
  float area,r; 
  public :
  Circle(float x){
    r = x;
  } 
  void calculate()
  {
    area = 3.14*r*r;
  }
  void display()
  {
    cout<<"Area : "<<area;
  }
};
int main()
{
    float x;
    cout<<"Enter radius : ";
    cin>>x;
    Circle c1(x);

    c1.calculate();
    c1.display();
    return 0;

}