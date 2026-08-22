class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i++)
        {
            if( i>0 && nums[i] == nums[i-1])continue;
            for(int j = i+1;j<nums.size();j++)
            {
                if( j>i+1 && nums[j] == nums[j-1])continue;
                
                int p1 = j+1;
                int p2 = nums.size() - 1;
                while(p2 > p1)
                {
                long long  sum = (long long)nums[i] + nums[j] + nums[p1] + nums[p2];
                if(sum == target)
                {
                    res.push_back({nums[i],nums[j],nums[p1],nums[p2]});
                    p1++;
                    p2--;
                    while(p2>p1 && nums[p1] == nums[p1-1])
                    {
                        p1++;
                    }
                    while(p2>p1 && nums[p2] == nums[p2+1])
                    {
                        p2--;
                    }
                }
                else if(sum < target)
                {
                    p1++;
                }
                else p2--;
                }
               
            }
        }
        return res;
    }
};