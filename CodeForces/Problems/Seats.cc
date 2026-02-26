#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> s_idx;
    s_idx.push_back(-2);
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            s_idx.push_back(i);
        }
    }
    s_idx.push_back(n + 1);
    int std_add = 0;
    for (size_t i = 0; i < s_idx.size() - 1; i++) {
        int left = s_idx[i];
        int right = s_idx[i+1];
        int gap_zeros = right - left - 1;
        if (gap_zeros > 0) {
            std_add += gap_zeros / 3;
        }
    }

    int ori_cnt = s_idx.size() - 2;
    cout << ori_cnt + std_add << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}