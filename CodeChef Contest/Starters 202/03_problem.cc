/*
Problem: Buying Flowers
Link: https://www.codechef.com/problems/FLOWERBUY
Date: 03-09-2025
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
	    int n;
	    cin>>n;
	    // First Check Max pair of 3
	    // Check How Many left
	    int left_flower = n%3;
	    int coin = 0;
	    switch (left_flower) {
	        // If 0 all are pair of 3
	        case 0 : coin = 5 * (n/3);
	        break;
	        // If 1 then open of pain of 3 and left flower is 4 cost 8
	        case 1 : coin = 5 * (n/3 - 1) + 8;
	        break;
	        // If 2 then only 2 flower left then cost 4
	        case 2 : coin = 5 * (n/3) + 4;
	        break;
	    }
	    cout<<coin<<endl;
	}
}
