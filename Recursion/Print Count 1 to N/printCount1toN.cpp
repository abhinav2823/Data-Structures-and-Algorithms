#include <iostream>
using namespace std;

void printCounting(int n){
    if(n == 0){
        return;
    }
    printCounting(n-1);
    cout<< n <<" ";
}



int main() {
    int n = 10;
    printCounting(n);
    return 0;
}