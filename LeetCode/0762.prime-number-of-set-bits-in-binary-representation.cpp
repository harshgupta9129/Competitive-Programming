/*
 * @lc app=leetcode id=762 lang=cpp
 *
 * [762] Prime Number of Set Bits in Binary Representation
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        vector <bool> isPrime(33, true);
        isPrime[0] = false;
        isPrime[1] = false;
        for (int i=2; i*i<33; i++) {
            if (isPrime[i]) {
                for (int j=i*i; j<33; j+=i) {
                    isPrime[j]=false;
                }
            }
        }
        int ans = 0;
        for (int i=left; i<=right; i++) {
            // int x = i;
            // int setbit = 0;
            // while (x) {
            //     setbit+=(x&1);
            //     x>>=1;
            // }
            int setbit = __builtin_popcount(i);
            if (isPrime[setbit]) ans++;
        }
        return ans;
    }
};
// @lc code=end

