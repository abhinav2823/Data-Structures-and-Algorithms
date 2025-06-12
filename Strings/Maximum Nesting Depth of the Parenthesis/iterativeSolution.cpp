class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int openBrackets = 0;

        for(char c: s){
            if(c == '('){
                openBrackets++;
            }
            else if(c == ')'){
                openBrackets--;
            }

            count = max(count, openBrackets);
        }

        return count;
    }
};