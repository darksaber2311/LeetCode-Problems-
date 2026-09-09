class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int mx = nums[0];
        int mn = nums[0];
        int n = nums.size();

        for(int i = 0;i<n;i++)
        {
            mx = max(mx,nums[i]);
            mn = INT_MAX;
            for(int j = i;j<n;j++)
            {
                mn = min(nums[j],mn);
            }
            if(mx-mn<=k)return i;
        }
        return -1;
    }
};