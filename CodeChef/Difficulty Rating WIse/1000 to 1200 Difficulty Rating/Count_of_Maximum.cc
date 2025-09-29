// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/MAXCOUNT

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        unordered_map <int,int> arr;
        for (int i=0; i<n; i++) {
            int x;
            cin>>x;
            arr[x]++;
        }
        int index = -1,maxCount = 0;
        for (auto &a : arr) {
            if (a.second > maxCount  || (a.second == maxCount && a.first < index)) {
                maxCount = a.second;
                index = a.first;
            }
        }
        cout<<index<<" "<<maxCount<<endl;
    }
    return 0;
}