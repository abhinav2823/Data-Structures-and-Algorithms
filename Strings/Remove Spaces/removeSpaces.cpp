class Solution {
  public:
    string modify(string& s) {
        int len = s.length();
        int j = 0;
        for(int i = 0; i < len; i++){
            if(s[i] != ' '){
                s[j] = s[i];
                j++;
            }
        }
        
        s.resize(j);
        
        return s;
    }
};