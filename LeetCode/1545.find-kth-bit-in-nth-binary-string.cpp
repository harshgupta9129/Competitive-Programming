/*
 * @lc app=leetcode id=1545 lang=cpp
 *
 * [1545] Find Kth Bit in Nth Binary String
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    char findKthBit(int n, int k) {
        int len = (1 << n) - 1;
        int mid = len/2+1;
        if (k==1) return '0';
        if (k==mid) return '1';
        if (k<mid) return findKthBit(n-1, k);
        else {
            k = len - k +1;
            int temp = findKthBit(n-1, k);
            return (temp == '1' ? '0' : '1');
        }
    }
};
// @lc code=end

