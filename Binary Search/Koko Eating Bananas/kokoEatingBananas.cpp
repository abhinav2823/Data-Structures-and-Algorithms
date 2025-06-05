class Solution {
public:

    int maxElement(vector<int>& piles){
        int n = piles.size();
        int maxi = INT_MIN;
        for(int i = 0; i < n; i++){
            maxi = max(maxi, piles[i]);
        }

        return maxi;
    }

    long long requiredTime(vector<int>& piles, int bananasPerHour){
        int n = piles.size();
        long long time = 0;
        for(int i = 0; i < n; i++){
            time += ceil((double)piles[i] / (double)bananasPerHour);
        }

        return time;
    }



    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = maxElement(piles);
        int ans = INT_MAX;

        while(low <= high){
            int mid = (low + high)/2;
            long long time = requiredTime(piles, mid);
            if(time <= h){
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