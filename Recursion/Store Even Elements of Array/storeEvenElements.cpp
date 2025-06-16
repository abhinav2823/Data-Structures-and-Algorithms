#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void storeEvenElements(vector<int>& arr, int n, vector<int>& even, int i){
    if(n == i){
        return;
    }
    if(arr[i]%2 == 0){
        even.push_back(arr[i]);
    }
    storeEvenElements(arr, n, even, i+1);
}



int main() {
    vector<int> arr = {1,2,3,4,6};
    vector<int> even;
    int n = arr.size();
    storeEvenElements(arr, n, even, 0);
    
    for(int i = 0; i < even.size(); i++){
        cout << even[i] << " ";
    }
    return 0;
}