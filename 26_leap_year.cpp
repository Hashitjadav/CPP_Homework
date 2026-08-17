#include <iostream>
using namespace std;

int main(){
    int user;
    cout << "Enter year to check leap year: ";
    cin >> user;

    if ((user % 4 == 0 && user % 100 != 0) || user % 400 == 0 ){
        cout << "Leap year";
    }
    else{
        cout << "Not a leap year";
    }
    return 0;
}