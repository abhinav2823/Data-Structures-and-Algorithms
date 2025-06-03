class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ones = 0;
        int currentOnes = 0;
        for(int i = 0; i <  nums.size(); i++){
            if(nums[i] == 1){
                currentOnes++;
            }
            else{
                ones = max(ones,currentOnes);
                currentOnes = 0;
            }
        }
        ones = max(ones,currentOnes);
        return ones;
    }
};