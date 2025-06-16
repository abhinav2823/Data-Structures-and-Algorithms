#include <iostream>
using namespace std;

int summation(int n){
    if(n == 1){
        return 1;
    }
    return n + summation(n - 1);
}



int main() {
    int n = 5;
    int ans = summation(n);
    cout << ans;
    return 0;
}