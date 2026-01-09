#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int a,b,x1,y1,x2,y2;
        cin>>a>>b>>x1>>y1>>x2>>y2;
        set <pair<int,int>> king;
        king.insert({x1-a,y1-b});
        king.insert({x1-a,y1+b});
        king.insert({x1+a,y1-b});
        king.insert({x1+a,y1+b});
        king.insert({x1-b,y1-a});
        king.insert({x1-b,y1+a});
        king.insert({x1+b,y1-a});
        king.insert({x1+b,y1+a});
        set <pair <int,int>> queen;
        queen.insert({x2-a,y2-b});
        queen.insert({x2-a,y2+b});
        queen.insert({x2+a,y2-b});
        queen.insert({x2+a,y2+b});
        queen.insert({x2-b,y2-a});
        queen.insert({x2-b,y2+a});
        queen.insert({x2+b,y2-a});
        queen.insert({x2+b,y2+a});
        int ans = 0;
        for (auto &p : king) {
            if (queen.count(p)) ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}