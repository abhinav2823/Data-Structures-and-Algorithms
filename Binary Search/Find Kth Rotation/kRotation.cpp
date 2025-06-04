// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int n = arr.size();
        int low = 0;
        int high = n - 1;
        int ans = INT_MAX;
        int index = -1;
        
        while(low <= high){
            int mid = (low + high)/2;
            
            // just a optimization to directly find the answer if there is no rotation
            if(arr[low] <= arr[high]){
                if(arr[low] < ans){
                    index = low;
                    ans = arr[low];
                }
                break;
            }
            
            if(arr[low] <= arr[mid]){
                if(arr[low] < ans){
                    index = low;
                    ans = arr[low];
                }
                
                low = mid + 1;
            }
            else{
                if(arr[mid] < ans){
                    index = mid;
                    ans = arr[mid];
                }
                
                high = mid - 1;
            }
            
        }
        
        return index;
        
    }
};
