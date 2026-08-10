class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int left = 0;
        int right = nums.size() - 1;
        int ans = 0;
        while (left < right) {
            if (nums[left] + nums[right] < target) {
                ans += right - left;
                left++;
            } else {
                right--;
            }
        }
        return ans;
    }
    // int countPairs(vector<int>& nums, int target) {
    //     int n = nums.size();
    //     int ans = 0;
    //     for (int i=0; i<n; i++) {
    //         for (int j=i+1; j<n; j++) if (nums[i]+nums[j] < target) ans++;
    //     }
    //     return ans;
    // }
};