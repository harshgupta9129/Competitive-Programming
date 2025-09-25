// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/CANDY123

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int a,b;
        cin>>a>>b;
        int i=1;
        while (true) {
            if (i%2!=0) {
                if (a>=i) a-=i;
                else {
                    cout<<"Bob"<<endl;
                    break;
                }
            }
            else {
                if (b>=i) b-=i;
                else {
                    cout<<"Limak"<<endl;
                    break;
                }
            }
            i++;
        } 
    }
    return 0;
}