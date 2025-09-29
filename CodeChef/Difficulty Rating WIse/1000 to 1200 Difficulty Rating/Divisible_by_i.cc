// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/DIVBYI

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
        vector <int> arr(n+1);
        arr[n] = n;
        int know = true;
        for (int i=n-1; i>=1; i--) {
            if (know) {
                arr[i] = arr[i+1] - i;
                know = !know;
            }
            else {
                arr[i] = arr[i+1] + i;
                know = !know;
            }
        }
        for (int i=1; i<=n; i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}
