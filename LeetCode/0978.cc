#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int n = arr.size();
        if (n==1 || (n==2 && arr[0]!=arr[1])) return n;
        int ans = 1;
        int counter = 1;
        int checker = 0;
        for (int i=0; i<n-1; i++) {
            if (arr[i]!=arr[i+1]) {
                if (checker==0) {
                    if (arr[i]>arr[i+1]) {
                        counter++;
                        checker=1;
                    }
                    else {
                        counter++;
                        checker=2;
                    }
                }
                else if (checker==1) {
                    if (arr[i]<arr[i+1]) {
                        counter++;
                        checker=2;
                    }
                    else {
                        counter=2;
                        checker=1;
                    }
                }
                else {
                    if (arr[i]>arr[i+1]) {
                        counter++;
                        checker=1;
                    }
                    else {
                        counter=2;
                        checker=2;
                    }
                }
            }
            else {
                checker = 0;
                counter = 1;
            }
            if (ans<counter) ans = counter;
        }
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