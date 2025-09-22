// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AMR15A

#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    vector <int> weapon(n);
    for (int i=0; i<n; i++) cin>>weapon[i];
    int lucky = 0;
    int unlucky = 0;
    for (int i = 0; i<n; i++) {
        if (weapon[i]%2==0) lucky++;
        else unlucky++;
    }
    cout<<(lucky > unlucky ? "READY FOR BATTLE" : "NOT READY")<<endl;
    return 0;
}