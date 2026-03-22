#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        unordered_map <int,int> freq;
        for (int i=0; i<n; i++) {
            int x;
            cin>>x;
            freq[x]++;
        }
        if (freq.size()==1) cout<<"YES";
        else if (freq.size()==2) {
            int i = 0;
            int arr[2];
            for (auto &p : freq) {
                arr[i++] = p.second;
            }
            if (abs(arr[0]-arr[1])<2) cout<<"YES";
            else cout<<"NO"; 
        }
        else cout<<"NO";
        cout<<endl;

    }
    return 0;
}