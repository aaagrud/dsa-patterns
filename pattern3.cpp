// n = 6
// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1 
// 0 1 0 1 0 1 

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int start;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0) start = 1; else start = 0;
        for(int j = 0; j <= i; j++){
            cout << start << " ";
            if(start == 1) start = 0; else start = 1;
        }
        cout << endl;
    }
}