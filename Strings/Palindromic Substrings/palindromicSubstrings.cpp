class Solution {
public:

    int expandAroundIndex(string s, int start, int end){
        int count = 0;
        while(start >= 0 && end < s.length() && s[start] == s[end]){
            count++;
            start--;
            end++;
        }

        return count;
    }

    int countSubstrings(string s) {
        int n = s.length();
        int count = 0;

        for(int i = 0; i < n; i++){
            // odd length substring
            int oddAns = expandAroundIndex(s,i,i);
            count += oddAns;
            int evenAns = expandAroundIndex(s,i,i+1);
            count += evenAns;
        }

        return count;
    }
};