#include <iostream>
using namespace std;

int main(){
    int first;
    cout << "Enter first number: ";
    cin >> first;

    int second;
    cout << "Enter second number: ";
    cin >> second;

    int third;
    cout << "Enter third number: ";
    cin >> third;

    if(first >= third && first >= second){
        cout << "First is highest";
    }
    else if(second > third && second > first){
        cout << "Second is highest";
    }
    else{
        cout << "Third is highest";
    }
    return 0;
}