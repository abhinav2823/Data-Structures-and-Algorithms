class Solution {
  public:
  
    int countSubstrLessThanK(string& s, int k){
        int l = 0;
        int r = 0;
        int count = 0;
        vector<int> freq(26,0);
        int distinct = 0;
        
        while(r < s.length()){
            if(freq[s[r] - 'a'] == 0){
                distinct++;
            }
            freq[s[r] - 'a']++;
            while(distinct > k){
                freq[s[l] - 'a']--;
                if(freq[s[l] - 'a'] == 0){
                    distinct--;
                }
                l++;
            }
            
            count += (r-l+1);
            r++;
        }
        
        return count;
    }
  
    int countSubstr(string& s, int k) {
        return countSubstrLessThanK(s, k) - countSubstrLessThanK(s, k-1);
    }
};