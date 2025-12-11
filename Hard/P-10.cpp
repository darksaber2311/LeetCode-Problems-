#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool isMatch(const string& s, const string& p) {
        int n = s.size(), m = p.size();
        vector<vector<bool>> dp(n+1, vector<bool>(m+1,false));
        dp[0][0] = true;
        for (int j = 2; j <= m; ++j) {
            if (p[j-1] == '*') dp[0][j] = dp[0][j-2];
        }
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                if (p[j-1] == '*') {
                    dp[i][j] = dp[i][j-2] || (matches(s, p, i, j-1) && dp[i-1][j]);
                } else {
                    dp[i][j] = matches(s, p, i, j) && dp[i-1][j-1];
                }
            }
        }
        return dp[n][m];
    }
private:
    bool matches(const string& s, const string& p, int i, int j) {
        // i and j are 1-based indices into s and p respectively for matching
        if (i == 0) return false;
        if (p[j-1] == '.') return true;
        return s[i-1] == p[j-1];
    }
};
