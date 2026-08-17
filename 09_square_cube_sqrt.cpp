#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double value;
    cout << "Enter value: ";
    cin >> value;
    double square_root = sqrt(value);
    double square = value * value;
    double cube = square * value;
    cout << "Square root - " << square_root << endl;
    cout << "Square - " << square << endl;
    cout << "Cube - " << cube;
    return 0;
}