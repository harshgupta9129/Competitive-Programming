#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
	    int n;
	    cin>>n;
	    vector <int> arr(2*n);
	    for (int i=0; i<2*n; i++) cin>>arr[i];
	    vector <int> left;
	    for (int i=0; i<n; i++) if (arr[i]>n) left.push_back(i);
	    vector <int> right;
	    for (int i=n; i<2*n; i++) if (arr[i]<=n) right.push_back(i);
	    long long ans = 0;
	    n = left.size();
	    for (int i=0; i<n; i++) ans+=(right[i]-left[i]);
	    cout<<ans<<endl;
	}
}
