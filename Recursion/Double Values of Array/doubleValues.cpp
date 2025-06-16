#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void doubleValues(vector<int>& arr, int n, int i){
    if(n == i){
        return;
    }
    arr[i] = 2*arr[i];
    doubleValues(arr, n, i+1);
}



int main() {
    vector<int> arr = {1,2,3,4,6};
    int n = arr.size();
    cout << "Array before doubling values: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    doubleValues(arr, n, 0);
    cout<<endl;
    cout << "Array after doubling values: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}