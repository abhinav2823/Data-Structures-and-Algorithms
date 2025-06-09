class Solution {
public:

    bool checkPalindrome(string s, int start, int end){
        while(start < end){
            if(s[start] != s[end]){
                return false;
            }
            start++;
            end--;
        }

        return true;
    }

    bool isPalindrome(string s) {
        int n = s.length();
        string str = "";

        for(int i = 0; i < n; i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] = s[i] - 'A' + 'a';
                str += s[i];
            }
            else if(s[i] >= 'a' && s[i] <= 'z'){
                str += s[i];
            }
            else if(s[i] >= '0' && s[i] <= '9'){
                str += s[i];
            }
        }

        return checkPalindrome(str, 0, str.length()-1);

    }
};