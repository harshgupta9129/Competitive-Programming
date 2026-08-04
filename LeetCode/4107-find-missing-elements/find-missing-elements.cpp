class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxi = nums[0];
        int mini = nums[0];
        unordered_set <int> st;
        for (int x : nums) {
            st.insert(x);
            maxi = max(maxi, x);
            mini = min(mini, x);
        }
        vector <int> ans;
        for (int i=mini; i<=maxi; i++) if (!st.count(i)) ans.push_back(i);
        return ans;
    }
};