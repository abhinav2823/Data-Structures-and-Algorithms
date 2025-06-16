#include <iostream>
using namespace std;

void printCounting(int n){
    if(n == 0){
        return;
    }
    cout<< n <<" ";
    printCounting(n-1);
}



int main() {
    int n = 10;
    printCounting(n);
    return 0;
}