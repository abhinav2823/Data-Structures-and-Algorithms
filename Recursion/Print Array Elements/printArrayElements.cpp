#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void printElements(vector<int>& arr, int n, int i){
    if(i > n - 1){
        return;
    }
    cout << arr[i] <<" ";
    printElements(arr, n, i+1);
}



int main() {
    vector<int> arr = {1,2,8,4,5};
    int n = arr.size();
    printElements(arr, n, 0);
    return 0;
}