class Solution {
public:
    int atmost(vector <int> &nums, int k) {
        int n = nums.size();
        int start = 0;
        unordered_map <int, int> mp;
        int ans = 0;
        for (int end=0; end<n; end++) {
            mp[nums[end]]++;
            while (mp.size()>k) {
                if (--mp[nums[start]]==0) {
                    mp.erase(nums[start]);
                }
                start++;
            }
            ans+=(end-start+1);
        }
        return ans;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmost(nums, k) - atmost(nums, k-1);
    }
};