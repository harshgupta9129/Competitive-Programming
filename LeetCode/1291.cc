#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string lower = to_string(low);
        string higher = to_string(high);
        int start_size = lower.length();
        int end_size = higher.length();
        vector <int> ans;
        for (int i=start_size; i<=end_size; i++) {
            for (int j=1; j+i<=10; j++) {
                int temp = 0;
                for (int k=0; k<i; k++) {
                    temp*=10;
                    temp+=(j+k);
                }
                if (temp>=low && temp<=high) ans.push_back(temp); 
            }
        }
        return ans;  
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