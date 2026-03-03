/*
 * @lc app=leetcode id=150 lang=cpp
 *
 * [150] Evaluate Reverse Polish Notation
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> st;
        for (string s : tokens) {
            if (s=="+" || s=="-" || s=="*" || s=="/") {
                int y = st.top();
                st.pop();
                int x = st.top();
                st.pop();
                switch (s[0]) {
                    case '+' : st.push(x+y);
                    break;
                    case '-' : st.push(x-y);
                    break;
                    case '*' : st.push(x*y);
                    break;
                    case '/' : st.push(x/y);
                }
            }
            else st.push(stoi(s));
        }
        return st.top();        
    }
};
// @lc code=end

