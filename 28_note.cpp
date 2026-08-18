#include <iostream>
using namespace std;

int main(){
    int user = 3893;
    int store = 0;
    int sum = 0;
    
    if (user % 500 <= 500){
        store = user % 500;
        sum = user/500;
        user = store;
        cout << "We have 500: " << sum <<endl;
    }
    if (user % 200 <= 200){
        store = user % 200;
        sum = user/200;
        user = store;
        cout << "We have 200: " << sum <<endl;
    }
    if (user % 100 <= 100){
        store = user % 100;
        sum = user/100;
        user = store;
        cout << "We have 100: " << sum <<endl;
    }
    if (user % 50 <= 50){
        store = user % 50;
        sum = user/50;
        user = store;
        cout << "We have 50: " << sum <<endl;
    }
    if (user % 10 <= 10){
        store = user % 10;
        sum = user/10;
        user = store;
        cout << "We have 10: " << sum <<endl;
    }
    if (user < 10){
        sum = user/1;
        cout << "We have 1: " << sum << endl;
    }
    return 0;
}