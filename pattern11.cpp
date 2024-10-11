

#include<iostream>
using namespace std;

void symmetry(int n) {
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < i + 1; j++){
            cout << '*' << ' ';
        }
        for(int j = 0; j < (n - i - 1) * 4; j++ ){
            cout << " ";
        }
        for(int j = 0; j < i + 1; j++){
            cout << '*' << ' ';
        }
        cout << endl;
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i; j++){
            cout << '*' << ' ';
        }
        for(int j = 0; j < i * 4; j ++){
            cout << ' ';
        }
        for(int j = 0; j < n - i; j++){
            cout << '*' << ' ';
        }
        cout << endl;
    }
}

int main(){
    symmetry(4);
}