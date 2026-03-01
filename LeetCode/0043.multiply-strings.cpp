/*
 * @lc app=leetcode id=43 lang=cpp
 *
 * [43] Multiply Strings
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1=="0" || num2=="0") return "0";
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        int m = num1.size();
        int n = num2.size();
        string ans;
        for (int i=0; i<m; i++) {
            string temp;
            int carry = 0;
            for (int j=0; j<i; j++) temp.push_back('0');
            for (int j=0; j<n; j++) {
                int sum = (num1[i]-'0')*(num2[j]-'0')+carry;
                temp.push_back(sum%10+'0');
                carry = sum/10;
            }
            if (carry) temp.push_back(carry+'0');
            int x=ans.length();
            int y=temp.length();
            int j=0, k=0;
            carry = 0;
            string ans1;
            while (j<x || k<y || carry) {
                int sum = carry;
                if (j<x) sum+=(ans[j++]-'0');
                if (k<y) sum+=(temp[k++]-'0');
                ans1.push_back(sum%10+'0');
                carry = sum/10;
            }
            ans = ans1;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
// @lc code=end

