class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        // Similar to the Unique paths 1 , just that the wherever there is an obstacle we
        // will take the dp[cell] = 0, rest stays the same , this makes sense and if you observe and
        // think about it 

        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size(); 
        vector<vector<int>> dp(m,vector<int>(n,0));
        for(int i = 0;i<m;i++)
        {
            for(int j = 0;j<n;j++)
            {
                if(obstacleGrid[i][j] == 0)
                {
                    
                    if(j-1>=0 && i-1>=0)
                    {
                        dp[i][j] = dp[i-1][j] + dp[i][j-1];
                    }
                    else if(i==0 && j==0)dp[i][j]=1;
                    else if(j-1<0)dp[i][j] = dp[i-1][j];
                    else if(i-1<0)dp[i][j] = dp[i][j-1];     
                }
                //else dp[i][j] = 0;
               
            }
        }
        return dp[m-1][n-1];
    }
};