class Solution {
  public:
    int countStudent(vector<int>& arr, int pages, int n){
        int student = 1;
        int pagesStudent = 0;
        
        for(int i = 0; i < n; i++){
            if(pagesStudent + arr[i] <= pages){
                pagesStudent += arr[i];
            }
            else{
                student++;
                pagesStudent = arr[i];
            }
        }
        
        return student;
    }
  
  
  
    int findPages(vector<int> &arr, int k) {
        int n = arr.size();
        if(k > n) return -1;
        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end(), 0);
        
        while(low <= high){
            int mid = (low + high)/2;
            int noOfStudent = countStudent(arr, mid, n);
            if(noOfStudent <= k){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
            
        }
        
        return low;
        
    }
};