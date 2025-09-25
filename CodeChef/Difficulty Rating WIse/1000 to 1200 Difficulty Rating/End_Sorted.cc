// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/ENDSORTED

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> arr(n);
        for (int i=0; i<n; i++) cin>>arr[i];
        int count = 0;
        int pos1=-1,posn=-1;
        for (int i=0; i<n; i++) {
            if (arr[i]==1) pos1 = i;
            if (arr[i]==n) posn = i;
        }
        if (pos1 < posn) {
            count+=pos1;
            count+=(n-posn-1);
        }
        else {
            count+=pos1;
            count+=(n-posn-2);
        }
        cout<<count<<endl;
    }
    return 0;
}