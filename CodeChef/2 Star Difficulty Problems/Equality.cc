#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
	    int n;
	    cin>>n;
	    vector <long long> a(n);
	    long long sum = 0;
	    for (int i=0; i<n; i++) {
	        cin>>a[i];
	        sum+=a[i];
	    }
	    sum/=(n-1);
	    for (int i=0; i<n; i++) cout<<sum-a[i]<<" ";
	    cout<<endl;
	}
}
