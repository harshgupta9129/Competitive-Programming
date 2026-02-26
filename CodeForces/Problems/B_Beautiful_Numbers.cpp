#include<bits/stdc++.h>?
using namespace std;

void solve() {
    string s;
    cin >> s;
    int cursum = 0;
    for (char c : s) cursum += (c - '0');
    if (cursum <= 9) {
        cout << 0 << "\n";
        return;
    }
    vector<int> suffix;
    for (size_t i = 1; i < s.length(); ++i) {
        suffix.push_back(s[i] - '0');
    }
    sort(suffix.begin(), suffix.end());
    int cost1 = 1e9;
    {
        int head = s[0] - '0';
        int curv = head;
        int kc = 0;
        for (int d : suffix) {
            if (curv + d <= 9) {
                curv += d;
                kc++;
            } else {
                break;
            }
        }
        cost1 = (int)suffix.size() - kc;
    }
    int cost2 = 1e9;
    {
        int head = 1; 
        int curv = head;
        int kc = 0;
        for (int d : suffix) {
            if (curv + d <= 9) {
                curv += d;
                kc++;
            } else {
                break;
            }
        }
        cost2 = 1 + ((int)suffix.size() - kc);
    }
    cout << min(cost1, cost2) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}