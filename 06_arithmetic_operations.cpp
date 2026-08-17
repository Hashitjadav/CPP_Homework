#include <iostream>
#include <string>
using namespace std;

int main(){
    int first_num;
    cout << "Enter first number: ";
    cin >> first_num;
    
    int second_num;
    cout << "Enter second number: ";
    cin >> second_num;

    int sum = first_num + second_num;
    int sub = first_num - second_num;
    int multi = first_num * second_num;
    int div = first_num / second_num;
    int remain = first_num % second_num;

    cout << "Sum is " << sum << endl;
    cout << "Subtraction is " << sub << endl;
    cout << "Multiplication is " << multi << endl;
    cout << "Division is " << div << endl;
    cout << "Remainder is " << remain << endl;

    return 0;
}