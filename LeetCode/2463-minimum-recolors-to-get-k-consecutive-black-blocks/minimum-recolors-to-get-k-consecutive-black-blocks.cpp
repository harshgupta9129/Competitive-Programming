class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.length();
        int ans = INT_MAX;
        int opr = 0;
        int count = 0;
        int i=0;
        for (int j=0; j<n; j++) {
            if (blocks[j]=='W') opr++;
            count++;
            while (count>k) {
                if (blocks[i++]=='W') opr--;
                count--;
            }
            if (count==k) ans = min(opr, ans);
        }
        return ans;
    }
};