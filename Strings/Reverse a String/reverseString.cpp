class Solution {
  public:
    string reverseString(string& s) {
        int len = s.length();
        int left = 0;
        int right = len - 1;
        
        while(left < right){
            swap(s[left],s[right]);
            left++;
            right--;
        }
        
        return s;
        
    }
};
