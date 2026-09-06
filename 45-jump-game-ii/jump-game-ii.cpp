class Solution {
public:
    int jump(vector<int>& nums) {
        //dp[x] = min number of jumps to reach x 
        int n = nums.size();
        vector<int>dp(n,INT_MAX);
        dp[0] = 0;
        int i = 0;
        int j = 1;
        while(dp[n-1] == INT_MAX)
        {
            while(j<=i+nums[i] && j<n)
            {
                dp[j] = dp[i]+1;
                j++;
            }
            i++;
        }
        
        return dp[n-1];
    }
};