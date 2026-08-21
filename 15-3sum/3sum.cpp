class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        for(int i = 0;i<nums.size();i++)
        {
            if(i>0 && nums[i-1] == nums[i])continue;
            int p1 = i+1;
            int p2 = nums.size()-1;
            //int prev_p1 = -1;
            //int prev_p2 = -1;
            while(p2>p1)
            {
                
                int sum = nums[i] + nums[p1] + nums[p2];
                
            
                if(sum == 0)
                {
                    res.push_back({nums[i],nums[p1],nums[p2]});
                    //prev_p1 = p1;
                    p1++;
                    p2--;
                    while(p1<p2 &&(nums[p1] == nums[p1-1]))
                    {
                        p1++;
                    }
                    while(p1<p2 && (nums[p2] == nums[p2+1]))
                    {
                        p2--;
                    }
                }
                else if(sum > 0)
                {
                   // prev_p2 = p2;
                    p2--;
                }
                else 
                {
                    //prev_p1 = p1;
                    p1++;
                }
            }
        }
        return res;
    }
};