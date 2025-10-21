#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,m,k;
    cin>>n>>m>>k;
    vector <vector <long long>> data (n,vector <long long> (k+1));
    long long ans = 0;
    for (long long i=0; i<n; i++) {
        long long temp = 0;
        for (long long j=0; j<k; j++) {
            cin>>data[i][j];
            temp+=data[i][j];
        }
        cin>>data[i][k];
        if (temp>=m && data[i][k]<=10) ans++;
    }
    cout<<ans<<endl;
    return 0;
}