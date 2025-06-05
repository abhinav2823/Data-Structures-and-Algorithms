class Solution {
  public:
  
    int pow(int mid, int n, int m){
        long long ans = 1;
        for(int i = 1; i <= n; i++){
            ans *= mid;
            if(ans > m) return 2;
        }
        if(ans == m) return 0;
        else return 1;
    }
  
  
    int nthRoot(int n, int m) {
        int low = 1;
        int high = m;
        
        while(low <= high){
            int mid = (low + high)/2;
            int val = pow(mid, n, m);
            
            if(val == 0){
                return mid;
            }
            else if(val == 2){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        
        return -1;
    }
};