// 1             1
// 1 2         2 1
// 1 2 3     3 2 1
// 1 2 3 4 4 3 2 1

// // n = 4
// 3n - 4i
// 0 -> 1 - 12 - 1
// 1 -> 2 - 8 - 2
// 2 -> 3 - 4 - 3
// 3 -> 4 - 0 - 4

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < i + 1; j++){
            cout << j + 1 << " ";
        }
        for(int j = 0; j < 3 * n - 4 * i; j++){
            cout << "-";
        }
        for(int j = 0; j < i + 1; j++){
            cout << i - j + 1 << " ";
        }
        cout << endl;
    }
}