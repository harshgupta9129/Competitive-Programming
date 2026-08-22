class Solution {
public:
    bool checkDivisibility(int n) {
        int digitSum = 0;
        int digitProduct = 1;
        int temp = n;
        while (temp) {
            digitSum+=(temp%10);
            digitProduct*=(temp%10);
            temp/=10;
        }
        return n%(digitSum + digitProduct) == 0;
    }
};