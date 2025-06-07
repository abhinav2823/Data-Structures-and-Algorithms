class Solution {
public:
    bool isPalindrome(int x) {
        if(x >= 0){
            long long rev = 0;
            int temp = x;
        
            while(temp){
                int rem = temp % 10;
                rev = rev * 10 + rem;
                temp /= 10;
            }
            
            return (x == rev);
        }

        return false;
    }
};