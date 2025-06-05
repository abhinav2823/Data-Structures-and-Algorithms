class Solution {
  public:
  
    bool canWePlaceCows(vector<int>& stalls, int k, int n, int mid){
        int cows = 1;
        int last = stalls[0];
        
        for(int i = 0; i < n; i++){
            if(stalls[i] - last >= mid){
                cows++;
                last = stalls[i];
            }
            if(cows >= k) return true;
        }
        
        return false;
    }

    int aggressiveCows(vector<int> &stalls, int k) {
        int n = stalls.size();
        sort(stalls.begin(), stalls.end());
        int low = 1;
        int high = stalls[n-1] - stalls[0];
        
        while(low <= high){
            int mid = (low + high)/2;
            if(canWePlaceCows(stalls,k,n,mid)){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        
        return high;
        
    }
};