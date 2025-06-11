class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> alphabets(26,0);
        if(s.length() != t.length()) return false;
        for(int i = 0; i < s.length(); i++){
            alphabets[s[i] - 'a']++;
        }

        for(int i = 0; i < t.length(); i++){
            alphabets[t[i] - 'a']--;
        }

        for(int i = 0; i < alphabets.size(); i++){
            if(alphabets[i] != 0) return false;
        }

        return true;
    }
};