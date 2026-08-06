class Solution {
public:
    int smallestNumber(int n, int t) {
        while (true) {
            int i = n;
            int temp = 1;
            while (i) {
                temp*=(i%10);
                i/=10;
            }
            if (temp%t==0) return n;
            n++;
        }
        return 1;
    }
};