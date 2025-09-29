// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/ANKTRAIN

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int point = n/8;
        n = n%8;
        if (n==0) {
            n=8;
            point--;
        }
        switch (n) {
            case 1 : cout<<4+(point*8)<<"LB"<<endl;
            break;
            case 2 : cout<<5+(point*8)<<"MB"<<endl;
            break;
            case 3 : cout<<6+(point*8)<<"UB"<<endl;
            break;
            case 4 : cout<<1+(point*8)<<"LB"<<endl;
            break;
            case 5 : cout<<2+(point*8)<<"MB"<<endl;
            break;
            case 6 : cout<<3+(point*8)<<"UB"<<endl;
            break;
            case 7 : cout<<8+(point*8)<<"SU"<<endl;
            break;
            case 8 : cout<<7+(point*8)<<"SL"<<endl;
            break;
        }
    }
    return 0;
}