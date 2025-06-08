string sort(string s) {
    int mapping[26] = {0};
    for(auto &c : s){
        mapping[c - 'a']++;
    }
    
    string res = "";
    for(int i = 0; i < 26; i++){
        char c = 'a' + i;
        while(mapping[i]){
            res += c;
            mapping[i]--;
        }
    }
    
    return res;
}