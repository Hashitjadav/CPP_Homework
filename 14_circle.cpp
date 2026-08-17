#include <iostream>
using namespace std;

int main(){
    int radius = 10;
    double pi = 3.14;
    double area = pi * radius * radius;
    double diameter = 2 * radius;
    double circum = 2 * pi * radius;

    cout << "Area: " << area << endl;
    cout << "Diameter: " << diameter << endl;
    cout << "Circumference: " << circum;

    return 0;
}