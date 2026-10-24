class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int mx = INT_MIN;
        int sum = 0;
        for(int right = 0;right<n;right++)
        {
            sum+=nums[right];
            mx = max(mx,sum); 
            // Kadane's algo
            if(sum<0)sum = 0;
            
        }
        return mx;
        
    }
};