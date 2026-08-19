class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map <int, unordered_set <int>> seatBooked;
        for (auto it : reservedSeats) {
            seatBooked[it[0]].insert(it[1]);
        }
        int count = 0;
        unordered_set <int> st1({2, 3, 4, 5});
        unordered_set <int> st2({4, 5, 6, 7});
        unordered_set <int> st3({6, 7, 8, 9});
        int ans = 0;
        for (auto &[key, it] : seatBooked) {
            count++;
            bool s1 = true, s2 = true, s3 = true;
            for (int x : st1) if (it.count(x)) s1 = false;
            if (s1) {
                for (int x : st1) it.insert(x);
                ans++;
            }
            for (int x : st2) if (it.count(x)) s2 = false;
            if (s2) {
                for (int x : st2) it.insert(x);
                ans++;
            }
            for (int x : st3) if (it.count(x)) s3 = false;
            if (s3) {
                for (int x : st3) it.insert(x);
                ans++;
            }
        }
        ans+=(n-count)*2;
        return ans;
    }
};