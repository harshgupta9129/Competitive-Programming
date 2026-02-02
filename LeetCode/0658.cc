#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        // vector <vector <int>> storage;
        // int n = arr.size();
        // for (int i=0; i<n; i++) {
        //     storage.push_back({abs(x-arr[i]), i});
        // }
        // sort(storage.begin(), storage.end());
        // vector <int> ans(k);
        // for (int i=0; i<k; i++) ans[i]=arr[storage[i][1]];
        // sort(ans.begin(), ans.end());
        // return ans;
        int n= arr.size();
        int pos = 0;
        int diff = abs(x-arr[0]);
        for (int i=1; i<n; i++) {
            int temp = abs(x-arr[i]);
            if (temp<diff) {
                diff = temp;
                pos = i;
            }
            else break;
        }
        if (k==1) return vecter <int> 
        int i=pos,j=pos+1;
        if (pos = n-1) 
        while (k--) {

        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        
    }
    return 0;
}