/*
Problem: If Only I Could Read
Link: https://www.codechef.com/problems/NOREAD
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
	    vector <int> arr(n);
	    for (int i=0; i<n; i++) cin>>arr[i];
	    
	    // Flag is for knowing the possible
	    bool flag = true;
	    
	    // We interate for i = 1 to n-1
	    for (int i=1; i<n; i++) {
	        // Check there any pair whose first element greater than second
	        // If exits then we can easily realise the chef he do make mistake because my chef rule median is first one but actually after sort then it lower is mediun in 2 length
	        if (arr[i-1]>arr[i]) {
	            flag = false;
	            cout<<i<<" "<<i+1<<endl;
	            break;
	        }
	    }
	    if (flag) cout<<-1<<endl;
	}
}