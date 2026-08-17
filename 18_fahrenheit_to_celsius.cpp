#include <iostream>
using namespace std;

int main(){
    double fahrenheit;
    cout << "Enter fahrenheit to change to celsius: ";
    cin >> fahrenheit;
    double celsius = (fahrenheit - 32) * 5/9;
    cout << "Celsius of fahrenheit " << fahrenheit << " is " << celsius;
    return 0;
}