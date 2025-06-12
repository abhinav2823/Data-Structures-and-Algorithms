class Solution {
public:
    int beautySum(string s) {
        int n = s.length();
        int beauty = 0;

        for(int i = 0; i < n; i++){
            unordered_map<char,int> mpp;
            for(int j = i; j < n; j++){
                mpp[s[j]]++;

                int mini = INT_MAX;
                int maxi = INT_MIN;

                for(auto it : mpp){
                    mini = min(mini, it.second);
                    maxi = max(maxi, it.second);
                }

                beauty += (maxi - mini);
            }
        }

        return beauty;
    }
};