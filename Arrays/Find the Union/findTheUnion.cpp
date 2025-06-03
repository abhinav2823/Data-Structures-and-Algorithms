class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int n = a.size();
        int m = b.size();
        
        int i = 0;
        int j = 0;
        
        vector<int> unionArray;
        
        while(i<n && j<m){
            if(a[i] <= b[j]){
                if(unionArray.size()==0 || unionArray.back() != a[i]){
                    unionArray.push_back(a[i]);
                }
                i++;
            }
            else{
                if(unionArray.size() == 0 || unionArray.back() != b[j]){
                    unionArray.push_back(b[j]);
                }
                j++;
            }
        }
        
        while(i < n){
            if(unionArray.back() != a[i]){
                unionArray.push_back(a[i]);
            }
            i++;
        }
        
        while(j < m){
            if(unionArray.back() != b[j]){
                unionArray.push_back(b[j]);
            }
            j++;
        }
        
        return unionArray;
        
    }
};