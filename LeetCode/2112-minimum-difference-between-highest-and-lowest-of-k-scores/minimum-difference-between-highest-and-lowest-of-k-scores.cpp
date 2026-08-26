class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        map <int, int> mp;
        int i=0;
        int ans = INT_MAX;
        for (int j=0; j<n; j++) {
            mp[nums[j]]++;
            while (j-i+1 > k) {
                mp[nums[i]]--;
                if (mp[nums[i]]==0) mp.erase(nums[i]);
                i++;
            }
            if (j-i+1==k) ans = min(ans, mp.rbegin()->first - mp.begin()->first);
        }
        return ans;
    }
};