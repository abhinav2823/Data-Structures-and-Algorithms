class Solution {
  public:
  
    bool possible(vector<int>& arr, int mid, int n, int k){
        int painter = 1;
        int time = 0;
        
        for(int i = 0; i < n; i++){
            if(time + arr[i] <= mid){
                time += arr[i];
            }
            else{
                painter++;
                time = arr[i];
            }
        }
        
        return painter <= k;
    }
  
  
    int minTime(vector<int>& arr, int k) {
        int n = arr.size();
        int low = *max_element(arr.begin(),arr.end());
        int high = accumulate(arr.begin(), arr.end(),0);
        
        while(low <= high){
            int mid = (low + high)/2;
            if(possible(arr,mid,n,k)){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        
        return low;
    }
};