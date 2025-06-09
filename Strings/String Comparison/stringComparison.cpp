
int stringComparsion(string s1, string s2) {
    int n = s1.length();
    int m = s2.length();
    
    for(int i = 0; i < n; i++){
        if(s1[i] < s2[i]) return -1;
        else if(s1[i] > s2[i]) return 1;
        else{
            if(s1[i] == 'n' && s1[i+1] == 'g' && s2[i+1] != 'g'){
                return 1;
            }
            else if(s2[i] == 'n' && s2[i+1] == 'g' && s1[i+1] != 'g'){
                return -1;
            }
        }
    }
    
    if(n < m) return -1;
    if(n > m) return 1;
   
    return 0;
}