/*
 * @lc app=leetcode id=397 lang=cpp
 *
 * [397] Integer Replacement
 */

// @lc code=start

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int integerReplacement(int n) {
        long long x = n;  // prevent overflow
        int steps = 0;

        while (x != 1) {
            if (x % 2 == 0) {
                x /= 2;
            } else {
                // special case
                if (x == 3 || (x & 2) == 0) {
                    x -= 1;
                } else {
                    x += 1;
                }
            }
            steps++;
        }
        return steps;
    }
};
// @lc code=end