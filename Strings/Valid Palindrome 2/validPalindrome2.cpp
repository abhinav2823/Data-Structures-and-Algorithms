class Solution {
public:
    bool checkPalindrome(string s, int left, int right){
        int n = s.size();

        while(left <= right){
            if(s[left] != s[right]){
                return false;
            }
            else{
                left++;
                right--;
            }
        }

        return true;
    }

    bool validPalindrome(string s) {
        int n = s.length();
        int left = 0;
        int right = n-1;

        while(left <= right){
            if(s[left] != s[right]){
                return checkPalindrome(s, left+1, right) || checkPalindrome(s, left, right - 1);
            }
            else{
                left++;
                right--;
            }
        }

        return true;
        
    }
};