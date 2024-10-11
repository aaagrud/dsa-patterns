// *****
//  ***
//   *

// n = 3
//
//0 ->  0 5 0
//1 ->  1 3 1
//2 ->  2 1

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }
        for(int j = 0; j <= 2 * i; j++){
            cout << "*";
        }
        for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }
        cout << endl;
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        for(int j = 0; j < (2 * n) - 1 - (2 * i); j++){
            cout << "*";
        }
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        cout << endl;
    }
}