/*
 * @lc app=leetcode id=29 lang=cpp
 *
 * [29] Divide Two Integers
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend==INT32_MIN && divisor==-1) return INT32_MAX;
        if (dividend==INT32_MIN && divisor==1) return INT32_MIN;
        int negative = 2;
        if (dividend>0) {
            negative--;
            dividend*=(-1);
        }
        if (divisor>0) {
            negative--;
            divisor*=(-1);
        }
        int ans = 0;
        while (dividend<=divisor) {
            int i=1;
            int temp = divisor;
            while (dividend<=divisor*(pow(2, i))) {
                i++;
            }
            dividend-=(temp*pow(2,i-1));
            ans+=pow(2,i-1);
        }
        if (negative ==1) ans*=(-1);
        return ans;
    }
};
// @lc code=end

