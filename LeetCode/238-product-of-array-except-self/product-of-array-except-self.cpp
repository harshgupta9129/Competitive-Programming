class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector <int> prefix(n, 1), sufix(n, 1);
        for (int i=0; i<n-1; i++) prefix[i+1] = prefix[i]*nums[i];
        for (int i=n-1; i>0; i--) sufix[i-1] = sufix[i]*nums[i];
        vector <int> ans(n);
        for (int i=0; i<n; i++) ans[i] = prefix[i]*sufix[i];
        return ans;
    }
};