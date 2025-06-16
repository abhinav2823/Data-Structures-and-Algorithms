#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void linearSearch(vector<int>& arr, int n, int target, int i){
    if(i == n){
        return;
    }
    if(arr[i] == target){
        cout<< i <<" ";
    }
   linearSearch(arr, n, target, i+1);
}



int main() {
    vector<int> arr = {1,2,8,8,5};
    int target = 8;
    int n = arr.size();
    linearSearch(arr, n, target, 0);
    return 0;
}