#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void printDigits(int n){
    if(n == 0){
        return;
    }
    int rem = n % 10;
    n = n/10;
    printDigits(n);
    cout << rem << endl;
}



int main() {
    int n = 1;
    printDigits(n);
    return 0;
}