// User function template for C++

class Solution {
  public:
  
    int upperBound(vector<int>& mat, int n, int x){
        int low = 0;
        int high = n-1;
        int ans = n;
        
        while(low <= high){
            int mid = (low + high)/2;
            if(mat[mid] > x){
                ans = mid;
                high = mid-1;
            } 
            else{
                low = mid + 1;
            }
        }
        
        return ans;
    }
  
  
    int countSmallerEquals(vector<vector<int>>& mat, int m, int n, int mid){
        int count = 0;
        for(int i = 0; i < m; i++){
            count += upperBound(mat[i], n, mid);
        }
        
        return count;
    }
  
  
    int median(vector<vector<int>> &mat) {
        int m = mat.size();
        int n = mat[0].size();
        int low = INT_MAX;
        int high = INT_MIN;
        
        for(int i = 0; i < m; i++){
            low = min(low, mat[i][0]);
            high = max(high, mat[i][n-1]);
        }
        
        int req = (m*n)/2;
        while(low <= high){
            int mid = (low + high)/2;
            int smallerEquals = countSmallerEquals(mat, m, n, mid);
            if(smallerEquals <= req) low = mid + 1;
            else high = mid - 1;
        }
        
        return low;
        
        
    }
};
