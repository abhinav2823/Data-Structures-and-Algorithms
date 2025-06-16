#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int>& arr, int n, int target, int i){
    if(i == n){
        return -1;
    }
    
    if(arr[i] == target){
        return i;
    }
    
    int ans = linearSearch(arr, n, target, i+1);
    return ans;
}



int main() {
    vector<int> arr = {1,2,8,4,5};
    int target = 11;
    int n = arr.size();
    int ans = linearSearch(arr, n, target, 0);
    if(ans == -1){
        cout<<"Element not found in the array" << endl;
    }
    else{
        cout<<"Element found at index "<<ans<<endl;
    }
    return 0;
}