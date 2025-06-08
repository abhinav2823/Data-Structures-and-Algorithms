class Solution {
public:
    string customSortString(string order, string s) {
        int mapping[26] = {0};

        for(auto &c : s){
            mapping[c - 'a']++;
        }

        string result = "";
        for(auto &c : order){
            int occurence = mapping[c - 'a'];
            while(occurence > 0){
                result += c;
                occurence--;
                mapping[c-'a']--;
            }
        }

        for(auto &c : s){
            if(mapping[c - 'a'] > 0){
                result += c;
            }
        }

        return result;
    }
};