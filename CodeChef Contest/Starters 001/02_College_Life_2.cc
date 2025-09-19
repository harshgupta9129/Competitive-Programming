#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int s;
        cin>>s;
        vector <int> q(s);
        for (int i=0; i<s; i++) cin>>q[i];
        int minutes = 0;
        for (int i=0; i<s; i++) {
            int number_of_epi;
            cin>>number_of_epi;
            vector <int> epi_length(number_of_epi);
            for (int j=0; j<number_of_epi; j++) {
                cin>>epi_length[j];
                minutes+=epi_length[j];
                if (j!=0) minutes-=q[i];
            } 
        }
        cout<<minutes<<endl;
    }
    return 0;
}