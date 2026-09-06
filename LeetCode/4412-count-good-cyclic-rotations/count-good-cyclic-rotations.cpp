class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n = nums.size();
        long long sumLeft = 0, sumRight = 0;
        for (int i=0; i<n/2; i++) sumLeft+=nums[i];
        for (int i=n/2; i<n; i++) sumRight+=nums[i];
        int i=0, j=n/2;
        int ans = 0;
        while (i<n) {
            sumLeft-=nums[i];
            sumRight+=nums[i];
            i++;
            sumLeft+=nums[j];
            sumRight-=nums[j];
            j++;
            if (j==n) j=0;
            if (sumLeft > sumRight) ans++;
        }
        return ans;
    }
};