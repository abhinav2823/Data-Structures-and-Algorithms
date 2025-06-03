class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int largest = INT_MIN;
        int secondLargest = INT_MIN;
        
        if(arr.size() < 2){
            return -1;
        }
        
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > largest){
                secondLargest = largest;
                largest = arr[i];
            }
            else if(arr[i] > secondLargest && arr[i]!=largest){
                secondLargest = arr[i];
            }
        }
        
        if(secondLargest == INT_MIN){
            return -1;
        }
        
        else return secondLargest;
        
    }
};

