#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void mininArray(vector<int>& arr, int n, int &mini, int i){
    if(i == n){
        return;
    }
    mini = min(mini, arr[i]);
    mininArray(arr, n, mini, i+1);
    
}



int main() {
    vector<int> arr = {1,2,8,0,5};
    int mini = INT_MAX;
    int n = arr.size();
    mininArray(arr, n, mini, 0);
    cout << mini;
    return 0;
}