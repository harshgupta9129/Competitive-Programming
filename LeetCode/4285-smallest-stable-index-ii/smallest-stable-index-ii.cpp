class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        map <int, int> mpmini, mpmaxi;
        for (int x : nums) mpmini[x]++;
        for (int i=0; i<n; i++) {
            mpmaxi[nums[i]]++;
            if ((mpmaxi.rbegin()->first - mpmini.begin()->first) <= k) return i;
            if (--mpmini[nums[i]] == 0) mpmini.erase(nums[i]);
        }
        return -1;
    }
};