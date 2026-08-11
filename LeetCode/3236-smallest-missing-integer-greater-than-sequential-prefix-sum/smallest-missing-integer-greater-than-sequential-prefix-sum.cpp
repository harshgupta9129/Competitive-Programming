class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_set <int> st;
        for (int x : nums) st.insert(x);
        int sum = nums[0];
        int currsum = nums[0];
        int n = nums.size();
        for (int i=1; i<n; i++) {
            if (nums[i] == nums[i-1] + 1) {
                currsum+=nums[i];
            }
            else {
                break;
            }
            sum = max(sum, currsum);
        }
        while (st.count(sum)) sum++;
        return sum;
    }
};