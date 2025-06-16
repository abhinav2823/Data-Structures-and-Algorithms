#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void maxinArray(vector<int>& arr, int n, int &maxi, int i){
    if(i == n){
        return;
    }
    maxi = max(maxi, arr[i]);
    maxinArray(arr, n, maxi, i+1);
    
}



int main() {
    vector<int> arr = {1,2,8,0,5};
    int maxi = INT_MIN;
    int n = arr.size();
    maxinArray(arr, n, maxi, 0);
    cout << maxi;
    return 0;
}