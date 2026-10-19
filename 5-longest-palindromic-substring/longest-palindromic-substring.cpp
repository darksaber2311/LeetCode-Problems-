class Solution {
public:
    
    string longestPalindrome(string s) {
        // dp[i][j] = is substring from index i to index j a palindrome
        // aXa
        // dp[i+1][j-1] is a palindrome and s[i] == s[j] then dp[i][j] is also true 

        // 
        //
        int res_start = 0;
        int res_end = 0;
        int max_len = 1;
        int n = s.size();
        vector<vector<bool>>dp(n,vector<bool>(n,false));

        // for 1 char
        for(int i = 0;i<n;i++)
        {
            dp[i][i] = true;
        }
        // for 2 chars
        for(int i = 0;i<n-1;i++)
        {
            if(s[i] == s[i+1])
            {
                dp[i][i+1] = true;
                res_start = i;
                max_len = 2;
            }
        } 
        // for 3 or more chars
        for(int i = n-3;i>=0;i--) //  starting from the back to resolve the inner dp array dp[i+1][j-1] properly
        {
            for(int j = i+2;j<n;j++)
            if(dp[i+1][j-1] && s[i] == s[j])
            {
                dp[i][j] = true;
                if(j-i+1>max_len)
                {
                    res_start = i;
                    res_end = j;
                    max_len = j-i+1;
                }
            }
            
        }
        //if(max_len<=0)return s.substr(0,1);
        return s.substr(res_start,max_len);
    }
};