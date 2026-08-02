class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        // count of fruits in current window
        unordered_map <int, int> mp;
        int ans = 0;
        int n = fruits.size();
        int start = 0;
        for (int end = 0; end<n; end++) {
            mp[fruits[end]]++;
            // Shrink window if more than 2 types
            while (mp.size()>2) {
                if (--mp[fruits[start]]==0) mp.erase(fruits[start]);
                start++;
            }
            // Update maximum fruits collected
            ans = max(ans, end-start+1);
        }
        return ans;
    }
};