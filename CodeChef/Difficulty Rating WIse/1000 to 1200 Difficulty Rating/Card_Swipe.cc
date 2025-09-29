// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/CARDSWIPE

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        unordered_map<int,bool> arr;
        int current = 0;
        int maximum = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            arr[x] = !arr[x]; 
            if (arr[x]) current++;
            else current--;
            maximum = max(maximum, current);
        }

        cout << maximum << "\n";
    }
    return 0;
}
