#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int i=0;
        int j=people.size()-1;
        int ans = 0;
        while (i<j) {
            if (people[i]+people[j]<=limit) {
                ans++;
                i++;
                j--;
            }
            else {
                ans++;
                j--;
            } 
        }
        if (i==j) ans++;
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        
    }
    return 0;
}