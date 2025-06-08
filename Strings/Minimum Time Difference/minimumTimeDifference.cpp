class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int t = timePoints.size();
        vector<int> minutes;

        for(int i = 0; i < t; i++){
            string curr = timePoints[i];
            int hour = stoi(curr.substr(0,2));
            int min = stoi(curr.substr(3,2));
            int totalMins = hour * 60 + min;
            minutes.push_back(totalMins);
        }

        sort(minutes.begin(), minutes.end());
        int minTimeDiff = INT_MAX;
        int n = minutes.size();
        for(int i = 0; i < n-1; i++){
            int diff = minutes[i+1] - minutes[i];
            minTimeDiff = min(minTimeDiff, diff);
        }

        minTimeDiff = min(minTimeDiff, (1440 + minutes[0])-minutes[n-1]);

        return minTimeDiff;
    }
};