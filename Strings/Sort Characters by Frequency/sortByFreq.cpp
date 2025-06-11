class Solution {
public:

    static bool comp(pair<char, int>& p1, pair<char, int>& p2){
        return p1.second > p2.second;
    }
    
    string frequencySort(string s) {
        vector<pair<char, int>> vec(123);
        
        for(char &ch : s) {
            int freq = vec[ch].second;
            vec[ch] = {ch, freq+1};
        }
        
        
        sort(begin(vec), end(vec), comp);
        string result = "";
        for(int i = 0; i <= 122; i++) {
            result += string(vec[i].second, vec[i].first);
        }
        return result;
    }
};

