class Solution {
  public:
    double findSmallestMaxDist(vector<int> &stations, int k) {
        int n = stations.size();
        vector<int> howMany(n-1,0);
        priority_queue<pair<double, int>> pq;
        
        for(int i = 0; i < n - 1; i++){
            pq.push({stations[i+1] - stations[i], i});
        }
        
        for(int gasStations = 1; gasStations <= k; gasStations++ ){
            auto tp = pq.top();
            pq.pop();
            int secInd = tp.second;
            
            howMany[secInd]++;
            
            double inidiff = stations[secInd + 1] - stations[secInd];
            double newSecLen = inidiff / (double)(howMany[secInd]+1);
            pq.push({newSecLen, secInd});
        }
        
       return round(pq.top().first * 100.0) / 100.0;
    }
};