class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        if(low < high){
            int pIndex = partition(arr,low,high);
            quickSort(arr,low,pIndex-1);
            quickSort(arr,pIndex+1,high);
        }
        
    }

  public:
    int partition(vector<int>& arr, int low, int high) {
        int pivot = low;
        int i = low;
        int j = high;
        
        while(i < j){
            while(arr[i] <= arr[pivot] && i < high){
                i++;
            }
            
            while(arr[j] > arr[pivot] && j > low){
                j--;
            }
            
            if(i < j) swap(arr[i], arr[j]);
        }
        swap(arr[pivot],arr[j]);
        return j;
    }
};