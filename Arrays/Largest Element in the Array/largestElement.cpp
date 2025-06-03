class Solution {
  public:
    int largest(vector<int> &arr) {
        int n = arr.size();
        int maxElement = INT_MIN;
        for(int i = 0; i < n; i++){
            maxElement = max(maxElement, arr[i]);
        }
        return maxElement; 
    }
};
