class Solution {
  public:
  
    int lowerBound(vector<int>& mat, int n, int x){
        int low = 0;
        int high = n-1;
        int ans = n;
        
        while(low <= high){
            int mid = (low + high)/2;
            if(mat[mid] >= x){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        
        return ans;
    }  

    int rowWithMax1s(vector<vector<int>> &arr) {
        int rows = arr.size();
        int cols = arr[1].size();
        int maxOnes = 0;
        int ans = -1;
        
        for(int i = 0; i < rows; i++){
            int currentOnes = cols - lowerBound(arr[i],cols,1);
            if(currentOnes > maxOnes){
                maxOnes = currentOnes;
                ans = i;
            }
        }
        
        return ans;
        
    }
};