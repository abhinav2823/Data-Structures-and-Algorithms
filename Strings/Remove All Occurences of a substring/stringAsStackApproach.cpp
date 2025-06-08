class Solution {
public:
    string removeOccurrences(string s, string part) {
        int  m = s.length();
        int n = part.length();

        string result = "";

        for(auto &c: s){
            result.push_back(c);
            if(result.length() >= n && result.substr(result.length()-n) == part){
                result.erase(result.length()-n);
            }
        }

        return result;
    }
};