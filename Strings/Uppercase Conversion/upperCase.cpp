
class Solution {
  public:
    string convert(string& s) { 
        int len = s.length();
        
        
        for(int i = 0; i < len; i++){
            if(i == 0){
                s[0] = s[0] - 'a' + 'A';
            }
            if(s[i] == ' '){
                s[i+1] = s[i+1] - 'a' + 'A';
            }
        }
        
        return s;
        
    }
};