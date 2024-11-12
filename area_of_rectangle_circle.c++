#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float r;
    cout<<"Enter the radius of the circle:";
    cin>>r;
    float side=(2*r)/sqrt(2);
    float area=side*side;
    cout<<"Area of rectangle:"<<area<<endl;
    return 0;
}
