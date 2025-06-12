class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        stack<char> st;

        for(char c : s){
            if(c == '('){
                st.push(c);
            }
            else if(c == ')'){
                st.pop();
            }

            count = max(count, (int)st.size());
        }

        return count;
    }
};