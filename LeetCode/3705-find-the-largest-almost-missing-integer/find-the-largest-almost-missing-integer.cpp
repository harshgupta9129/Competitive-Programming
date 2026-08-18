class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map <int, int> mp;
        for (int x : nums) mp[x]++;
        vector <vector <int>> v;
        for (auto it : mp) v.push_back({it.first, it.second});
        sort(v.rbegin(), v.rend());
        if (k==1) {
            for (auto it : v) {
                if (it[1]==1) return it[0];
            }
            return -1;
        }
        else if (k==n) return v[0][0];
        if (mp[max(nums[0], nums[n-1])] == 1) return max(nums[0], nums[n-1]);
        else if (mp[min(nums[0], nums[n-1])] ==1 ) return min(nums[0], nums[n-1]);
        return -1;
    }
};