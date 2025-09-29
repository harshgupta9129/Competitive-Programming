// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/VOTERS

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N1, N2, N3;
    cin >> N1 >> N2 >> N3;

    vector<int> list1(N1), list2(N2), list3(N3);
    for(int &x : list1) cin >> x;
    for(int &x : list2) cin >> x;
    for(int &x : list3) cin >> x;

    int i = 0, j = 0, k = 0;
    vector<int> ans;

    while(i < N1 || j < N2 || k < N3) {
        int val = INT_MAX;
        if(i < N1) val = min(val, list1[i]);
        if(j < N2) val = min(val, list2[j]);
        if(k < N3) val = min(val, list3[k]);

        int count = 0;
        if(i < N1 && list1[i] == val) count++;
        if(j < N2 && list2[j] == val) count++;
        if(k < N3 && list3[k] == val) count++;

        if(count >= 2) ans.push_back(val);

        if(i < N1 && list1[i] == val) i++;
        if(j < N2 && list2[j] == val) j++;
        if(k < N3 && list3[k] == val) k++;
    }

    cout << ans.size() << '\n';
    for(int x : ans) cout << x << '\n';

    return 0;
}
