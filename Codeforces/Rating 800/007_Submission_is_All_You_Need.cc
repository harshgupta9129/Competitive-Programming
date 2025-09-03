// 2130A	Submission is All You Need

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> arr(n);
        for (int i=0; i<n; i++) cin>>arr[i];
        sort(arr.begin(), arr.end());
        int i = 0;
        int score = 0;
        while (arr[i]==0) {
            score++;
            i++;
        }
        while (i<n) {
            score+=arr[i];
            i++;
        }
        cout<<score<<endl;
    }
    return 0;
}