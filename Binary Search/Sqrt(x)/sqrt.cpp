class Solution {
public:
    int mySqrt(int x) {
        if(x == 0) return 0;
        int low = 1;
        int high = x;
        long long ans = -1;

        while(low <= high){
            long long mid = low + (high - low)/2;
            long long val = mid * mid;

            if(val == x){
                return mid;
            }
            else if(val < x){
                ans = max(ans,mid);
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }

        return ans;
    }
};