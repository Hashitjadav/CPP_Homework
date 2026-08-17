#include <iostream>
using namespace std;

int main(){
    int user;
    cout << "Enter number to check: ";
    cin >> user;

    if (user % 5 == 0 && user % 11 == 0){
        cout << "Yes it is divisible by 5 and 11";
    }
    else{
        cout << "No it is not divisible by 5 and 11";
    }
    return 0;
}