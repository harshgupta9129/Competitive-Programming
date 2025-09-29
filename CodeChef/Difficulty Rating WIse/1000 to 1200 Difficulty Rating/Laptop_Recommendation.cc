// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/LAPTOPREC

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> freq(11,0);
        for (int i=0; i<n; i++) {
            int x;
            cin>>x;
            freq[x]++;
        }
        int max = 0;
        for (int i=1; i<=10; i++) {
            if (freq[i] > freq[max]) {
                max = i;
            }
        }
        sort(freq.begin(),freq.end());
        if (freq[10]==freq[9]) cout<<"CONFUSED"<<endl;
        else cout<<max<<endl;
    }
    return 0;
}