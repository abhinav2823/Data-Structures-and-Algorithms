class Solution {
public:

    int findMaxElementIndex(vector<vector<int>>& mat, int n, int m, int mid){
        int maxElement = INT_MIN;
        int index = -1;
        for(int i = 0; i < n; i++){
            if(mat[i][mid] > maxElement){
                maxElement = mat[i][mid];
                index = i;
            }
        }

        return index;
    }


    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int low = 0;
        int high = m-1;

        while(low <= high){
            int mid = (low + high)/2;
            int maxRowIndex = findMaxElementIndex(mat,n,m,mid);
            int left = mid - 1 >= 0 ? mat[maxRowIndex][mid-1] : -1;
            int right = mid + 1 < m ? mat[maxRowIndex][mid+1] : -1;

            if(mat[maxRowIndex][mid] > left && mat[maxRowIndex][mid] > right){
                return {maxRowIndex, mid};
            }
            else if(mat[maxRowIndex][mid] < right){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }

        return {-1,-1};
    }
};