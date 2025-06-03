class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int zero = 0;
        int index = 0;
        
        while(index < n){
            if(nums[index] == 0){
                index++;
            }
            else if(nums[index] != 0){
                swap(nums[zero],nums[index]);
                zero++;
                index++;
            }
        }
    }
};