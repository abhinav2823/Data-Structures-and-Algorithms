class Solution {
  public:
    int lowerBound(vector<int> arr, int n, int target){
        int low = 0;
        int high = n - 1;
        int lower = -1;
        
        while(low <= high){
            int mid = (low + high)/2;
            if(arr[mid] == target){
                lower = mid;
                high = mid -1;
            }
            else if(arr[mid] > target){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        
        return lower;
    }
    
    int upperBound(vector<int> arr, int n, int target){
        int low = 0;
        int high = n - 1;
        int upper =n;
        
        while(low <= high){
            int mid = (low + high)/2;
            if(arr[mid] == target){
                upper = mid;
                low = mid + 1;
            }
            else if(arr[mid] < target){
                low = mid+1;
            }
            else{
                high = mid - 1;
            }
        }
        
        return upper;
    }
    
    
    int countFreq(vector<int>& arr, int target) {
        int n = arr.size();
        int lower = lowerBound(arr,n,target);
        if (lower == -1) return 0;
        int upper = upperBound(arr,n,target);
        
        return (upper - lower)+1;
        
    }
};
