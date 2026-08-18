#include <iostream> 
using namespace std;

int main(){

    int user = 350;
    int bill = 0;
    int store = 0;

    if (user <= 50){
        store = (user * 0.50);
    }
    else if(user <= 150){
        store = (50 * 0.50) + ((user - 50) * 0.75);
    }
    else if(user <= 250){
        store = (50 * 0.50) + (100 * 0.75) + ((user - 150) * 1.25);
    }
    else{
        store = (50 * 0.50) + (100 * 0.75) + (100 * 1.25) + ((user - 250) * 1.50);
    }
    store = store + (store * 0.20);
    cout << "Total bill: " << store;
    return 0;
}