#include <iostream> 
#include <string>
using namespace std;

int main(){
    string first;
    cout << "Enter first word: ";
    cin >> first;

    string second;
    cout << "Enter second word: ";
    cin >> second;

    cout << "Normal: " << "First - " <<  first << ", " << "Second - " <<  second << endl;

    string bucket;
    bucket = first;
    first = second;
    second = bucket;

    cout << "Swapped: " << "First - " << first << ", " << "Second - " << second;


    return 0;
}