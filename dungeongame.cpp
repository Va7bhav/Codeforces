#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
    int f(int r, int c, vector<vector<int>>& dungeon) {
        if (r >= dungeon.size() || c >= dungeon[0].size()) {
            return 1e9;
        }
        if (r == dungeon.size() - 1 && c == dungeon[0].size() - 1) {
            if (dungeon[r][c] < 0) {
                return 1 + abs(dungeon[r][c]);
            } else {
                return 1;
            }
        }
        int minHealth = min(f(r + 1, c, dungeon), f(r, c + 1, dungeon));
        // if (dungeon[r][c] >= 0) {
        //     // if my health is increasing 
        //     // i would need reqHealth + hp == minHealth to survive
        //     // but what if my required health is negative
        //     // than i would have to iterate over two cases
        //     if (minHealth - dungeon[r][c] > 0) {
        //         return minHealth - dungeon[r][c];
        //     } else { // if required health is negative
        //         return 1;
        //     }

        // } else {
        //     // if my health is decreasing 
        //     // reqHealth - hp should be minHealth, reqHealth = minHealth + hp // hp is positive so we should make dungeon[r][c] positive by multiplying it by -1
        //     // but what if my required health is negative
        //     // than i would have to iterate over two cases
        //     if (minHealth - dungeon[r][c] > 0) {
        //         return minHealth - dungeon[r][c];
        //     } else { // if required health is negative
        //         return 1;
        //     }
        // }

        if (minHealth - dungeon[r][c] > 0) {
            return minHealth - dungeon[r][c];
        } else {
            return 1;
        }
    }
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        return f(0, 0, dungeon);   
    }
};
int main() {
    
    return 0;
}