#include <iostream>
using namespace std;

int main(){
    double length;
    cout << "Enter length of rectangle: ";
    cin >> length;

    double breadth;
    cout << "Enter breadth of rectangle: ";
    cin >> breadth;

    double perimeter = 2 * (length + breadth);
    double area = length * breadth;
    cout << "Perimeter: " << perimeter << endl;
    cout << "Area: " << area << endl;
    
    return 0;
}