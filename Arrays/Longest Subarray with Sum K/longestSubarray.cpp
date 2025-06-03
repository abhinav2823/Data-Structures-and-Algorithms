
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int n = arr.size();
        map<int,int> prefixSum;
        int sum = 0;
        int maxLen = 0;
        
        for(int i = 0; i < n; i++){
            sum += arr[i];
            
            if(sum == k){
                maxLen = max(maxLen, i+1);
            }
            
            int rem = sum - k;
            
            if(prefixSum.find(rem) != prefixSum.end()){
                int len = i - prefixSum[rem];
                maxLen = max(maxLen, len);
            }
            
            if(prefixSum.find(sum) == prefixSum.end()){
                prefixSum[sum] = i;
            }
        }
        
        return maxLen;
        
    }
};

