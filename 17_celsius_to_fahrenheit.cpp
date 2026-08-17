#include <iostream>
using namespace std;

int main(){
    double celsius ;
    cout << "Enter celsius to change to fahrenheit: ";
    cin >> celsius ;
    double fahrenheit = (celsius * 9/5) + 35;
    cout << "fahrenheit of celsius " << celsius << " is " << fahrenheit;
    return 0;
}