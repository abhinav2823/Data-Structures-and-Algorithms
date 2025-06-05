class Solution {
public:

    bool possible(vector<int>& nums, int divisor, int threshold, int n){
        int result = 0;
        for(int i = 0; i < n; i++){
            result += ceil((double)nums[i] / (double) divisor);
        }

        return result <= threshold;
    }


    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int maxi = INT_MIN;
        for(int i = 0; i < n; i++){
            maxi = max(maxi,nums[i]);
        }

        int low = 1;
        int high = maxi;
        int ans = maxi;

        while(low <= high){
            int mid = (low + high)/2;
            if(possible(nums, mid, threshold, n)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        return ans;
    }
};