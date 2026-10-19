
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int ans = 0;

        for (int x : st) {
            // Start counting only from the beginning
            // of a consecutive sequence.
            if (x == INT_MIN || !st.count(x - 1)) {
                int curr = x;
                int count = 1;

                while (curr != INT_MAX && st.count(curr + 1)) {
                    curr++;
                    count++;
                }

                ans = max(ans, count);
            }
        }

        return ans;
    }
};