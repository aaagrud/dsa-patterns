// *
// **
// ***
// **
// *

// n = 3

// 0 -> 1 
// 1 -> 2
// 2 -> 3

// 3 -> 2
// 4 -> 1

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i <= 2 * n - 1; i++){
        int stars = i;
        if(i > n) stars = 2 * n - i;
        for(int j = 0; j < stars; j++){
            cout << "*";
        }
        cout << endl;
    }
}