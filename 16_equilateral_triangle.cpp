#include <iostream>
using namespace std;
#include <cmath>

int main(){
    double side = 12.55;
    double area  = (sqrt(3)/4) * side * side;
    cout << "Area of an Equilateral triangle: " << area;
    return 0;
}