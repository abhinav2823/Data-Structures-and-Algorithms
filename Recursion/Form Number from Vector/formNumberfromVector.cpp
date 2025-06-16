#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void formNumber(vector<int>& arr, int n, int& num, int i){
    if(i == n){
        return; 
    }
    num = num * 10 + arr[i];
    formNumber(arr, n, num, i+1);
}



int main() {
    vector<int> arr = {4,2,1,7,0,9};
    int n = arr.size();
    int num = 0;
    formNumber(arr, n, num, 0);
    cout<<num;
    return 0;
}