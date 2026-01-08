#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        vector <int> temp = arr;
        sort(temp.begin(), temp.end());
        int n = arr.size();
        vector <int> ans;
        for (int i=n-1; i>=0; i--) {
            int pos = find(arr.begin(), arr.end(), temp[i]) - arr.begin();
            if (pos==i) continue;
            ans.push_back(pos+1);
            ans.push_back(i+1);
            reverse(arr.begin(), arr.begin()+pos+1);
            reverse(arr.begin(), arr.begin()+i+1);
        }
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}