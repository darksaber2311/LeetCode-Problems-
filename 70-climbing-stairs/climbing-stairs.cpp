class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n+1);
        dp[0] = 1;
        dp[1] = 1;
        //dp[x] = no. of ways to reach step x

        for(int i = 2;i<n+1;i++)
        {
            dp[i] = dp[i-1] + dp[i-2]; //you can reach i from i-2 or i-1 step , so there!!
        }
        return  dp[n];
    }
};