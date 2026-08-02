class Solution {
public:
    int atmost (vector <int> &nums, int goal) {
        int n = nums.size();
        int sum = 0;
        int start = 0;
        int ans = 0;
        for (int end = 0; end<n; end++) {
            sum+=nums[end];
            while (sum>goal) sum-=nums[start++];
            ans+=(end-start+1);
        }
        return ans;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        if (goal==0) return atmost(nums, goal);
        return atmost(nums, goal) - atmost(nums, goal-1);
    }
};