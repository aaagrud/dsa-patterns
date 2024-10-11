#include<iostream>
using namespace std;

void getStarPattern(int n) {
    for(int i = 0; i < n; i++){
        cout << '*';
    }
    cout << endl;
    for(int i = 0; i < n - 2; i++){
        cout << '*';
        for(int j = 0; j <= n - 3; j++){
            cout << ' ';
        }
        cout << '*';
        cout << endl;
    }
    if(n != 1){
        for(int i = 0; i < n; i++){
            cout << '*';
        }
    }
}


int main(){
    getStarPattern(4);
}
