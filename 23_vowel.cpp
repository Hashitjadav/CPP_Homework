#include <iostream>
using namespace std;

int main(){
    char user;
    cout << "Enter to check vowel or consonant: ";
    cin >> user;

    if (user == 'a' || user == 'e' || user == 'i' || user == 'o' || user == 'u'){
        cout << "Its an array " << user;
    }
    else{
        cout << "Its not an array";
    }
    return 0;
}