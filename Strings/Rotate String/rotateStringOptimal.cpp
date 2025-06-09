class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()) return false;

        // If we concatenate a string with itself then it contains all rotations of a string
        string doubleString = s + s;
        if(doubleString.find(goal) != string::npos){
            return true;
        }

        return false;
    }
};