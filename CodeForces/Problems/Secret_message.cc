#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<string> codes(k);
        for (int i = 0; i < k; i++) cin >> codes[i];
        vector<string> chooser(n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < k; j++) {
                chooser[i].push_back(codes[j][i]);
            }
            sort(chooser[i].begin(), chooser[i].end());
            chooser[i].erase(unique(chooser[i].begin(), chooser[i].end()), chooser[i].end());
        }
        string answer;
        for (int d = 1; d <= n; d++) {
            if (n % d != 0) continue;
            vector<char> base(d);
            bool ok = true;
            for (int i = 0; i < d; i++) {
                vector<int> freq(26, 0);
                for (int pos = i; pos < n; pos += d) {
                    for (char c : chooser[pos]) {
                        freq[c - 'a']++;
                    }
                }
                int need = n / d;
                bool found = false;
                for (int c = 0; c < 26; c++) {
                    if (freq[c] == need) {
                        base[i] = char('a' + c);
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                answer.resize(n);
                for (int i = 0; i < n; i++) {
                    answer[i] = base[i % d];
                }
                break;
            }
        }
        cout << answer << "\n";
    }
    return 0;
}
