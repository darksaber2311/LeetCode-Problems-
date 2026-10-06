class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res;
        vector<vector<int>> dp(rowIndex+1,vector<int>(rowIndex+1,0));
        dp[0][0] = 1;
        if(rowIndex == 0) return {1};
        for(int i = 1;i<=rowIndex;i++)
        {
            for(int j = 0;j<=i;j++)
            {
                if(j==0 || j==i) dp[i][j] = 1;
                else
                {
                    dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
                }
                if(i == rowIndex)res.push_back(dp[i][j]);
            }
            
        }
        return res;
    }
};