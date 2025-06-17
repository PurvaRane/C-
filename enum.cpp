#include<iostream>
using namespace std;
enum shape {
    circle,
    rectangle,
    triangle
};
int main(){
    cout<<"Enter the shape code : ";
    int code;
    cin>>code;
    while(code>=circle && code<=triangle){
        switch(code){
            case circle: "It's a Circle ";
            break;
            case rectangle : "It's a Rectangle ";
            break;
            case triangle : "'It's a Triangle ";
            break;
        }
        cout<<"Enter shape code";
        cin>>code;

    }
    cout<<"BYE \n";
    return 0;
}
