class Solution {
public:

    bool possible(vector<int>& arr, int mid, int days, int n){
        int daysTaken = 1;
        int sum = 0;

        for(int i = 0; i < n; i++){
            if(sum + arr[i] <= mid){
                sum += arr[i];
            }
            else{
                daysTaken += 1;
                sum = arr[i];
            }
        }

        return daysTaken <= days;
    }


    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        if(n == 1) return weights[0];
        int low = INT_MIN;
        for(int i = 0; i < n; i++){
            low = max(low, weights[i]);
        }

        int high = accumulate(weights.begin(),weights.end(),0);
        int ans = high;

        while(low <= high){
            int mid = (low + high)/2;
            if(possible(weights, mid, days,n)){
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