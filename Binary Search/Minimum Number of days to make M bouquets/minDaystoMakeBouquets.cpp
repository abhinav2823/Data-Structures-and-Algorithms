class Solution {
public:
    bool possible(vector<int>& bloomDay, int day, int m, int k){
        int count = 0;
        int noOfB = 0;

        for(int i = 0; i < bloomDay.size(); i++){
            if(day >= bloomDay[i]){
                count++;
            }
            else{
                noOfB += count/k;
                count = 0;
            }
        }
        noOfB += count/k;
        return noOfB >= m;
    }


    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        long long val = (long long)m * (long long)k;
        if(val > n) return -1;

        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i = 0; i < n; i++){
            mini = min(mini,bloomDay[i]);
            maxi = max(maxi,bloomDay[i]);
        }

        int low = mini;
        int high = maxi;
        int ans = maxi;

        while(low <= high){
            int mid = (low + high)/2;
            if(possible(bloomDay,mid,m,k)){
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