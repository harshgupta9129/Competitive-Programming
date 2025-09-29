// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/CHEFCBA

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector <float> arr(4);
    for (int i=0; i<4; i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    if (arr[3]/arr[2]==arr[1]/arr[0]) cout<<"Possible"<<endl;
    else cout<<"Impossible"<<endl;
    return 0;
}