// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/CIELAB

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b;
    cin>>a>>b;
    int diff = a-b;
    string s = to_string(diff);
    if (s[0]<'9') s[0]++;
    else s[0]='1';
    cout<<stoi(s)<<endl; 
    return 0;
}