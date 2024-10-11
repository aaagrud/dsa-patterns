#include<iostream>
using namespace std;

void alphaHill(int n) {
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            cout << ' ';
        }
        for(char j = 'A'; j < 'A' + i; j++){
            cout << j << ' ';
        }
        for(char j = 'A' + i; j >= 'A'; j-- ){
            cout << j << ' ';
        }
        for(int j = 0; j < n - i - 1; j++){
            cout << ' ';
        }
        cout << endl;
    }
}

int main(){
    alphaHill(3);
}