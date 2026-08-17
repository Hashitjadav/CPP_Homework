#include <iostream>
using namespace std;

int main(){
    int principal_amt;
    cout << "Enter principal amount: ";
    cin >> principal_amt;

    int rate;
    cout << "Enter rate: ";
    cin >> rate;

    int time;
    cout << "Enter time: ";
    cin >> time;

    float interest = (principal_amt * rate * time)/100.00;
    cout << "Here is your simple interest: " << interest;

    return 0;
}