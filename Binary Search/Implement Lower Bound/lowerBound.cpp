class Solution {
  public:

    int findFloor(vector<int>& arr, int x) {
        int n = arr.size();
        int low = 0;
        int high = n-1;
        int result = -1;
        
        while(low <= high){
            int mid = (low + high)/2;
            if(arr[mid] <= x){
                result = mid;
                low = mid+1;
            }
            else if(arr[mid] > x){
                high = mid-1;
            }
        }
        
        return result;
        
    }
};
