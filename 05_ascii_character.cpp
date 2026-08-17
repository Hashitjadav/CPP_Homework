#include <iostream>
using namespace std;

int main(){
    int ascii;
    cout << "Enter ascii to know its value: ";
    cin >> ascii;
    char change = ascii; 
    cout << "Value of char " << ascii << " is " <<change;
    return 0;
}