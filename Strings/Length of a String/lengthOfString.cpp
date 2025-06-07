class Solution {
  public:
    int lengthString(string &s) {
        int length = 0;
        for(auto &i: s){
            length++;
        }
        
        return length;
        
    }
};