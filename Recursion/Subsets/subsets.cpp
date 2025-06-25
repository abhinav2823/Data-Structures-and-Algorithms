class Solution {
public:

    void findSubsets(vector<int>& nums, vector<vector<int>>& subsets,vector<int>& temp, int index){
        if(index == nums.size()){
            subsets.push_back(temp);
            return;
        }
        int element = nums[index];
        temp.push_back(element);
        findSubsets(nums, subsets, temp, index+1);

        temp.pop_back();
        findSubsets(nums, subsets, temp, index+1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subsets;
        vector<int> temp;
        int index = 0;
        findSubsets(nums, subsets, temp, index);
        return subsets;
    }
};