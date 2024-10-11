#include<iostream>
using namespace std;

void alphaRamp(int n) {
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i + 1; j++){
            char printable = 'A' + i;
            cout << printable << " ";
        }
        cout << endl;
    }
}

int main(){
    alphaRamp(3);
}