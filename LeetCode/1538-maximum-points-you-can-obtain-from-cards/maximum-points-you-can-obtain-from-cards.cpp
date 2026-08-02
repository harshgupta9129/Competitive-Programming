class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int score = 0;
        // firstly take whole left size
        for (int i=0; i<k; i++) {
            score+=cardPoints[i];
        }
        int ans = score;
        // and in each interation remove last added in previous loop and add from right so we go through each cases
        for (int i=1; i<=k; i++) {
            score-=cardPoints[k-i];
            score+=cardPoints[n-i];
            ans = max(ans, score);
        }
        return ans;
    }

    // Pure Sliding Window
    // int maxScore(vector<int>& cardPoints, int k) {
    //     int n = cardPoints.size();
    //     int i=0;
    //     int minSum = INT_MAX;
    //     int sum = 0;
    //     int totalSum = 0;
    //     for (int j=0; j<n; j++) {
    //         totalSum+=cardPoints[j];
    //         sum+=cardPoints[j];
    //         if (j-i+1 > n-k) sum-=cardPoints[i++];
    //         if (j-i+1 == n-k) minSum = min(minSum, sum);
    //     }
    //     return totalSum - minSum;
    // }
};