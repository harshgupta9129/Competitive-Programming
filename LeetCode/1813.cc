#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        int len1 = sentence1.length();
        int len2 = sentence2.length();
        vector <string> s1,s2;
        int i=0;
        while (i<len1) {
            string temp = "";
            while (i<len1 && sentence1[i]!=' ') {
                temp+=sentence1[i];
                i++;
            }
            s1.push_back(temp);
            i++;
        }
        i=0;
        while (i<len2) {
            string temp = "";
            while (i<len2 && sentence2[i]!=' ') {
                temp+=sentence2[i];
                i++;
            }
            s2.push_back(temp);
            i++;
        }
        int i1=0, i2=0;
        int j1=s1.size()-1, j2=s2.size()-1;
        while (i1<=j1 && i2<=j2) {
            if (s1[i1]!=s2[i2]) break;
            i1++;
            i2++;
        }
        while (i1<=j1 && i2<=j2) {
            if (s1[j1]!=s2[j2]) break;
            j1--;
            j2--;
        }
        return (i1>j1 || i2>j2);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        
    }
    return 0;
}