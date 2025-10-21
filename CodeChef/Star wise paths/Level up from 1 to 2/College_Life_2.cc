#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long t;
    cin >> t;
    while (t--) {
        long long s;
        cin>>s;
        vector <long long> intro (s);
        for (long long i=0; i<s; i++) cin>>intro[i];
        long long total_watch_time = 0;
        for (long long i=0; i<s; i++) {
            long long number_of_episodes;
            cin>>number_of_episodes;
            for (long long j=0; j<number_of_episodes; j++) {
                long long x;
                cin>>x;
                total_watch_time+=x;
            }
            total_watch_time-=(number_of_episodes-1)*intro[i];
        }
        cout<<total_watch_time<<endl;
    }
    return 0;
}