class Solution {
public:

    int countSubarray(vector<int>& nums, int mid, int n){
        int subArray = 1;
        long long sum = 0;

        for(int i = 0; i < n; i++){
            if(sum + nums[i] <= mid){
                sum += nums[i];
            }
            else{
                subArray++;
                sum = nums[i];
            }
        }

        return subArray;
    }

    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while(low <= high){
            int mid = (low + high)/2;
            int noOfSubarray = countSubarray(nums, mid, n);
            if(noOfSubarray <= k){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        return low;
    }
};