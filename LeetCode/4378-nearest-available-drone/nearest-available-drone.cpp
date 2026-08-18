class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int minDistance = INT_MAX;
        int index = -1;
        int n = drones.size();
        for (int i=0; i<n; i++) {
            int dist = abs(target[0]-drones[i][0])+abs(target[1]-drones[i][1]);
            if (dist <= drones[i][2] && dist < minDistance) {
                minDistance = dist;
                index = i;
            }
        }
        return index;
    }
};