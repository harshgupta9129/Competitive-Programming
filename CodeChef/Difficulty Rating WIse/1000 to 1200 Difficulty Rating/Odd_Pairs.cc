// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/ODDPAIRS

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin>>n;
        long long odd = (n+1)/2;;
        long long even = n/2;
        cout<<odd*even*2<<endl;
    }
    return 0;
}