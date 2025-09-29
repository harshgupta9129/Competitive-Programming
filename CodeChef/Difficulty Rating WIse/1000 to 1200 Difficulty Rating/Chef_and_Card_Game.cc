#include <bits/stdc++.h>
using namespace std;

// Function to calculate sum of digits of a number
int digitSum(long long n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int chefPoints = 0, mortyPoints = 0;
        for (int i = 0; i < n; i++) {
            long long a, b;
            cin >> a >> b;
            int chefPower = digitSum(a);
            int mortyPower = digitSum(b);

            if (chefPower > mortyPower) chefPoints++;
            else if (mortyPower > chefPower) mortyPoints++;
            else {
                chefPoints++;
                mortyPoints++;
            }
        }

        if (chefPoints > mortyPoints) cout << "0 " << chefPoints << endl;
        else if (mortyPoints > chefPoints) cout << "1 " << mortyPoints << endl;
        else cout << "2 " << chefPoints << endl; // tie
    }
    return 0;
}
