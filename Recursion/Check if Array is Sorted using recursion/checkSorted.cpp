#include <iostream>
#include<bits/stdc++.h>
using namespace std;


bool checkSorted(vector<int>& arr, int n, int i){
    if(i == n){
        return true;
    }
    if(arr[i] >= arr[i-1]){
       bool ans = checkSorted(arr, n, i+1);
       return ans;
    }
    else{
        return false;
    }
}



int main() {
    vector<int> arr = {1,2,3,6,5};
    int n = arr.size();
    bool sorted = checkSorted(arr, n, 1);
    if(sorted){
        cout << "Array is sorted" << endl;
    }
    else{
        cout << "Array is not sorted" << endl;
    }
    
    return 0;
}