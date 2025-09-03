/*
Problem: Two Rolls
Link: https://www.codechef.com/problems/TWOROLL
Date: 03-09-2025
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int x,y;
	    cin>>x>>y;
	    int min = 2 * y;
	    int max = 2 * (y+5);
	    int req = 50-x;
	    if (max>=req && min<=req) cout<<"YES\n";
	    else cout<<"NO\n";
	}
}