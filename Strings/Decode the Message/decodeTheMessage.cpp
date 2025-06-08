class Solution {
public:
    string decodeMessage(string key, string message) {
        int n = key.length();
        int m = message.length();

        char alphabets = 'a';
        char mapping[256] = {0};
        for(auto &ch : key){
            if(ch != ' ' && mapping[ch] == 0){
                mapping[ch] = alphabets;
                alphabets++;
            }
        }

        string result = "";
        for(auto &ch: message){
            if(ch == ' '){
                result += " ";
            }
            else{
                result += mapping[ch];
            }
        }

        return result;
    }
};