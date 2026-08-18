#include <iostream>
using namespace std;

int main(){
    char user;
    cout << "Enter symbol to check: ";
    cin >> user;

    int change = user;
    cout << change;
    if ((change >= 65 && change <= 90) || (change >= 97 && change <= 122 )){
        cout << "Its an char";
    }
    else{
        cout << "its an int";
    }
    return 0;
}