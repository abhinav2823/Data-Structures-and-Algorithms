#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int binarySearch(vector<int>& arr, int left, int right, int target){
    if(left > right){
        return -1;
    }
    int mid = left + (right - left)/2;
    if(arr[mid] == target){
        return mid;
    }
    else if(arr[mid] < target){
        return binarySearch(arr,mid+1,right,target);
    }
    else return binarySearch(arr, left, mid-1, target);
}



int main() {
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();
    int target = 0;
    int index = binarySearch(arr, 0, n-1, target);
    if(index == -1){
        cout << "Element not found" << endl;
    }
    else{
        cout << "Element found at index "<< index << endl;
    }
    
    return 0;
}