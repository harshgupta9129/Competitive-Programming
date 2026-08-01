class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
        int n = nums.size();
        vector <int> prediv(n+1, 0);
        for (int i=0; i<n; i++) {
            if (nums[i]%p==0) prediv[i+1]=prediv[i]+1;
            else prediv[i+1] = prediv[i];
        }
        set <vector <int>> ans;
        for (int i=0; i<n; i++) {
            vector <int> temp;
            for (int j=i; j<n; j++) {
                temp.push_back(nums[j]);
                if (prediv[j+1]-prediv[i]<=k) ans.insert(temp);
                else break;
            }
        }
        return ans.size();
    }
};