#include <iostream>
using namespace std;

int main(){
    int user;
    cout << "Enter number to check even or odd: ";
    cin >> user;

    if (user % 2 == 0){
        cout << "Entered number is Even";
    }
    else{
        cout << "Entered number is Odd";
    }
    return 0;
}