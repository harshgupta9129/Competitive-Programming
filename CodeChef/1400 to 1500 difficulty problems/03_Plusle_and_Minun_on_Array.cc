#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
	    int n;
	    cin>>n;
	    vector <long long> arr(n);
	    for (int i=0; i<n; i++) {
	        long long x;
	        cin>>x;
	        arr[i] = abs(x);
	    }
	    int min_index = 0;
	    for (int i=0; i<n; i+=2) {
	        if (arr[i]<arr[min_index]) min_index = i;
	    }
	    int max_index = 1;
	    for (int i=1; i<n; i+=2) {
	        if (arr[i]>arr[max_index]) max_index = i;
	    }
	    if (arr[min_index]<arr[max_index]) swap(arr[min_index], arr[max_index]);
	    long long ans = 0;
	    for (int i=0; i<n; i++) {
	        if (i%2==0) ans+=arr[i];
	        else ans-=arr[i];
	    }
	    cout<<ans<<endl;
	}
}
