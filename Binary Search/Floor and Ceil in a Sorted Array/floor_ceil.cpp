// User code template

class Solution {
  public:
    int ceilArray(vector<int>& arr,int n, int x){
        int low = 0;
        int high = n-1;
        int ceil = -1;
        
        while(low <= high){
            int mid = (low+high)/2;
            if(arr[mid] >= x){
                ceil = arr[mid];
                high = mid - 1;
            }
            else{
                low = mid+1;
            }
        }
        
        return ceil;
    }
    
    int floorArray(vector<int>& arr,int n, int x){
        int low = 0;
        int high = n-1;
        int floor = -1;
        
        while(low <= high){
            int mid = (low+high)/2;
            if(arr[mid] <= x){
                floor = arr[mid];
                low = mid + 1;
            }
            else{
                high = mid-1;
            }
        }
        
        return floor;
    }
  
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        vector<int> result;
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int ceil = ceilArray(arr,n, x);
        int floor = floorArray(arr,n, x);
        result.push_back(floor);
        result.push_back(ceil);
        return result;
        
    }
};