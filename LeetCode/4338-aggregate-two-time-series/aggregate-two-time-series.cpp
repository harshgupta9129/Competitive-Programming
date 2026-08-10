class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& series1, vector<vector<int>>& series2) {
        int i=0, j=0;
        int n1 = series1.size(), n2 = series2.size();
        vector <vector <int>> ans;
        while (i<n1 || j<n2) {
            int time;
            int value = 0;
            if (i<n1 && j<n2) {
                time = min(series1[i][0], series2[j][0]);
                if (time==series1[i][0]) {
                    value+=series1[i][1];
                    i++;
                }
                else value+=series1[i][1];
                if (time==series2[j][0]) {
                    value+=series2[j][1];
                    j++;
                }
                else value+=series2[j][1];
            }
            else if (i<n1) {
                time = series1[i][0];
                value = series1[i][1];
                i++;
            }
            else {
                time = series2[j][0];
                value = series2[j][1];
                j++;
            }
            ans.push_back({time, value});
        }
        return ans;
    }
};