#include <iostream>
#include <string>
using namespace std;

int main(){
    string word;
    cout << "Enter word to know its length: ";
    cin >> word;
    int len = word.length();
    cout << "length of word " << word << " is "<< len;
    return 0;
}