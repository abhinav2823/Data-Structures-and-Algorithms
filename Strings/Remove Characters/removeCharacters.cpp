// User function template for c++
class Solution {
  public:
    string removeChars(string str1, string str2) {
        int n = str1.length();
        int m = str2.length();
        vector<int> exists(26, 0);
        
        for(auto &c : str2){
            exists[c - 'a'] = 1;
        }
        
        string result = "";
        for(auto &c : str1){
            if(exists[c - 'a'] != 1){
                result += c;
            }
        }
        
        return result;
        
        
    }
};
