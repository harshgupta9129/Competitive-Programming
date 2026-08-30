class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int min_idx = 0;
        int max_idx = 0;
        for (int i=0; i<n; i++) {
            if (nums[i] > nums[min_idx]) min_idx = i;
            if (nums[i] < nums[max_idx]) max_idx = i;
        }
        if (n==1) return 1;
        return min({max(min_idx+1, max_idx+1), n-min(min_idx, max_idx), min(min_idx+1, max_idx+1)+n-max(min_idx, max_idx)});
    }
};