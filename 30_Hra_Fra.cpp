#include <iostream>
using namespace std;

int main(){
    int user;
    cout << "Enter your salary: ";
    cin >> user;

    int sum = 0;

    if (user <= 10000){
        sum = user + (user * 0.20) + (user * 0.80);
    }
    else if (user <= 20000){
        sum = user + (user * 0.25) + (user * 0.90);
    }
    else if (user > 20000){
        sum = user + (user * 0.30) + (user * 0.95);
    }
    cout << "Salary: " << sum;
    return 0;
}