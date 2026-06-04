/*
 * @lc app=leetcode id=3633 lang=cpp
 *
 * [3633] Earliest Finish Time for Land and Water Rides I
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int n = landStartTime.size();
        int m = waterStartTime.size();
        int ans = INT_MAX;

        // Land -> Water
        int landRide = INT_MAX;
        for (int i=0; i<n; i++) landRide = min(landRide, landStartTime[i]+landDuration[i]);
        for (int j=0; j<m; j++) {
            int temp = max(landRide, waterStartTime[j])+waterDuration[j];
            ans = min(ans, temp);
        }

        // Water -> Land
        int waterRide = INT_MAX;
        for (int i=0; i<m; i++) waterRide = min(waterRide, waterStartTime[i]+waterDuration[i]);
        for (int j=0; j<n; j++) {
            int temp = max(waterRide, landStartTime[j])+landDuration[j];
            ans = min(ans, temp);
        }
        return ans;
    }
};
// @lc code=end

