class Solution {
public:

    bool checkPalindrome(string &s, int i, int j){
        while(i <= j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }

        return true;
    }

    string longestPalindrome(string s) {
        int n = s.length();
        int maxLen = 0;
        int start = -1;

        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                if(checkPalindrome(s, i, j)){
                    if((j-i+1) > maxLen){
                        maxLen = j-i+1;
                        start = i;
                    }
                }   
            }
        }

        return s.substr(start, maxLen);
    }
};