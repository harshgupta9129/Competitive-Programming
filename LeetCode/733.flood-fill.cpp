/*
 * @lc app=leetcode id=733 lang=cpp
 *
 * [733] Flood Fill
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void bfs (int row, int col, int color, int scolor, vector<vector<int>>& image) {
        image[row][col]=color;
        queue <pair <int, int>> q;
        q.push({row, col});
        int n = image.size();
        int m = image[0].size();
        while (q.size()!=0) {
            row = q.front().first;
            col = q.front().second;
            q.pop();
            row--;
            if (row>=0 && image[row][col]==scolor) {
                q.push({row, col});
                image[row][col]=color;
            }
            row+=2;
            if (row<n && image[row][col]==scolor) {
                q.push({row, col});
                image[row][col]=color;
            }
            row--;
            col--;
            if (col>=0 && image[row][col]==scolor) {
                q.push({row, col});
                image[row][col]=color;
            }
            col+=2;
            if (col<m && image[row][col]==scolor) {
                q.push({row, col});
                image[row][col]=color;
            }
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int scolor = image[sr][sc];
        if (scolor != color) bfs(sr, sc, color, scolor, image);
        return image;
    }
};
// @lc code=end

