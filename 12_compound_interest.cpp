#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int amt;
    cout << "Enter principal amount: ";
    cin >> amt; 

    int rate;
    cout << "Enter rate: ";
    cin >> rate;

    int time;
    cout << "Enter time: ";
    cin >> time;

    int Amount = amt * pow((1 + rate/100.0),time);
    int CI = Amount - amt;

    cout << "Compound interest: " << CI;

    return 0;
}