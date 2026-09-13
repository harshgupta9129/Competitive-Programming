class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size();
        int ans = 0;
        for (int i=-(n-1); i<n; i++) {
            for (int j=-(n-1); j<n; j++) {
                int count = 0;
                for (int x=0; x<n; x++) {
                    for (int y=0; y<n; y++) {
                        int idx = x+i;
                        int idy = y+j;
                        if (idx<0 || idy<0 || idx>=n || idy>=n) continue;
                        if (img1[idx][idy]==1 && img2[x][y]==1) count++; 
                    }
                }
                ans = max(ans, count);
            }
        }
        return ans;
    }
};