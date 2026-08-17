#include <iostream>
using namespace std;

int main(){
    int user;
    cout << "Enter total number of days: ";
    cin >> user;
    int year = user/365;
    int remaining = user % 365;
    int weeks = remaining / 7;
    int days = remaining % 7;

    cout << "Year: " << year << endl;
    cout << "Remaining days in year: " << remaining << endl;
    cout << "Weeks: " << weeks << endl;
    cout << "Remaining days in week: " << days;
    return 0;
}