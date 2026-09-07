class Solution {
public:
    int minDistance(string word1, string word2) {
        // its a 2D DP problem .. a little challenging one at that 
        // dp[x][y] = min # of operations required for first x chars of word1 and first y chars of word2
        // Note: first x chars means the last char in this range will have index x-1(0 based indexing)
        //       and same for word2 , the last char will have the index y-1

        int m = word1.size();
        int n = word2.size();
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));

        for(int i = 0;i<=m;i++)
        {
            dp[i][0] = i;
        }
        for(int j = 0;j<=n;j++)
        {
            dp[0][j] = j;
        }

        for(int i = 1;i<=m;i++)
        {
            for(int j = 1;j<=n;j++)
            {
                if(word1[i-1] == word2[j-1]) dp[i][j] = dp[i-1][j-1];
                else
                {
                    dp[i][j] = min(
                        {
                            dp[i-1][j] + 1,  // deletion
                            dp[i][j-1] + 1,  // insertion
                            dp[i-1][j-1] +1  // replacement
    
                        }
                    );
                }
        
            }
        }
        return dp[m][n];
    }
};