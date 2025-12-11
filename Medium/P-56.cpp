#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        if (intervals.empty()) return res;

        sort(intervals.begin(), intervals.end());

        res.push_back(intervals[0]);
        for (int i = 1; i < (int)intervals.size(); ++i) {
            auto& last = res.back();
            // Overlap
            if (intervals[i][0] <= last[1]) {
                last[1] = max(last[1], intervals[i][1]);
            } else {
                res.push_back(intervals[i]);
            }
        }
        return res;
    }
};
