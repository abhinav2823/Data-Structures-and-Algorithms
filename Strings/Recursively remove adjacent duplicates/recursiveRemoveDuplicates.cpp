string rremove(string s) {
        string res="";
        int i=0;
        while(i<s.length()) {
            if(i+1<s.length() && s[i]==s[i+1]) {
                i++;
                while(i<s.length() && s[i] == s[i-1]) {
                    i++;
                }
            }
            else {
                res += s[i];
                i++;
            }
        }
        if(res.length() == s.length()) return res;
        else return rremove(res);
    }