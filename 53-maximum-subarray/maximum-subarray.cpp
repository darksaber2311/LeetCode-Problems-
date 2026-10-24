class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int mx = INT_MIN;
        int sum = 0;
        for(int right = 0;right<n;right++)
        {
            sum+=nums[right];
            mx = max(mx,sum); 
            while(sum< 0 && left<n)
            {
                sum-=nums[left];
                left++;
            }
            
        }
        return mx;
        
    }
};