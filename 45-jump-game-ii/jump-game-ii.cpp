class Solution {
public:
    int jump(vector<int>& nums) {
        //dp[x] = min number of jumps to reach x 
        int n = nums.size();
        vector<int>dp(n,INT_MAX);
        dp[0] = 0;
        for(int i = 1;i<n;i++)
        {
            //int min_jump = INT_MAX;
            for(int j=i-1;j>=0;j--)
            {
                if(i-j<=nums[j])
                {
                   // count++;
                    dp[i] = min(dp[i],dp[j]+1);
                }
            }
        }
        return dp[n-1];
    }
};