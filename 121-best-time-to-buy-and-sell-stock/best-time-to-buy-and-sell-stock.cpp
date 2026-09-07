class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = prices[0];
        int n = prices.size();
        vector<int> dp(n);
        dp[0] = 0;
        for(int i = 1;i<n;i++)
        {
            mn = min(mn,prices[i]);
            dp[i] = max(dp[i-1],prices[i]-mn);
        }
        return dp[n-1];
    }
};