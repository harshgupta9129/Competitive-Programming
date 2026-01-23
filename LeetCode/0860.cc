#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int count5 = 0;
        int count10 = 0;
        int count20 = 0;
        for (int x : bills) {
            if (x==5) count5++;
            else if (x==10) count10++;
            else count20++;
            int rem = x-5;
            if (rem==0) continue;
            if (rem==15) {
                if (count10) {
                    count10--;
                    if (count5) count5--;
                    else return false;
                }
                else if (count5>=3) count5-=3;
                else return false;
            }
            else {
                if (count5) count5--;
                else return false;
            }
        }
        return true;
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