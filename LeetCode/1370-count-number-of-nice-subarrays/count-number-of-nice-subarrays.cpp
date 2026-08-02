class Solution {
public:
    int atmost (vector <int> &nums, int k) {
        int n = nums.size();
        int ans = 0;
        int start = 0;
        int count = 0;
        for (int end = 0; end < n; end++) {
            if (nums[end]%2) count++;
            while (count>k) {
                if (nums[start++]%2) count--;
            }
            ans+=(end-start+1);
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmost(nums, k) - atmost(nums, k-1);
    }
};