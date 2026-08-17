#include <iostream>
using namespace std;

int main(){
    int first;
    cout << "Enter marks of first subject: ";
    cin >> first;

    int second;
    cout << "Enter marks of second subject: ";
    cin >> second;

    int third;
    cout << "Enter marks of third subject: ";
    cin >> third;

    int fourth;
    cout << "Enter marks of fourth subject: ";
    cin >> fourth;

    double five;
    cout << "Enter marks of five subject: ";
    cin >> five;

    double total = (first + second + third + fourth + five);
    double avg = total/5;
    double percentage = (total/500) * 100;

    cout << avg << endl << percentage;

    return 0;
}