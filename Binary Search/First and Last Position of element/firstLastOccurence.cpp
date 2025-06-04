class Solution {
public:
    int firstPosition(vector<int>& nums, int n, int target){
        int low = 0;
        int high = n-1;
        int first = -1;

        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] == target){
                first = mid;
                high = mid - 1;
            }
            else if (nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid-1;
            }
        }

        return first;
    }

    int lastPosition(vector<int>& nums, int n, int target){
        int low = 0;
        int high = n-1;
        int last = -1;

        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] == target){
                last = mid;
                low = mid + 1;
            }
            else if(nums[mid] > target){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        return last;
    }


    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> result;
        int first = firstPosition(nums,n,target);
        int last = lastPosition(nums,n,target);
        result.push_back(first);
        result.push_back(last);
        return result;
    }
};