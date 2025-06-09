class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();
        int m = goal.length();
        if (n != m)
            return false;

        for (int r = 0; r < n; r++) {
            string rotated = "";
            for (int i = r; i < n; i++) {
                rotated += s[i];
            }
            
            for(int i = 0; i < r; i++){
                rotated += s[i];
            }
            
            if (rotated == goal) {
                return true;
            }
        }

        return false;
    }
};