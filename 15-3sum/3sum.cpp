class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //set<vector<int>> res;
        vector<vector<int>>res;
        int pointer1 = 0;
        int poinnter2 = nums.size()-1;
        int n = nums.size();
        bool duplicate = false;
        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++)
        {
             int pointer1 = i+1;
             int pointer2 = nums.size()-1;
             
             while(pointer1<pointer2)
             {
                vector<int> triplet;
                int sum = nums[i] + nums[pointer1] + nums[pointer2];
                if(sum == 0)
                {
                    if(!res.empty())
                    {
                        for(int j = 0;j<res.size();j++)
                        {
                            if(res[j][0] == nums[i] && res[j][1] == nums[pointer1])
                            {
                                duplicate = true;
                            }
                        }
                    }
                    if(!duplicate)
                    {
                    triplet.push_back(nums[i]);
                    triplet.push_back(nums[pointer1]);
                    triplet.push_back(nums[pointer2]);
                    res.push_back(triplet);
                    }
                    duplicate = false;
                    pointer1++;
                    pointer2--;
                   
                }
                if(sum < 0)
                {
                    pointer1++;
                }
                if(sum > 0 )
                {
                    pointer2--;
                }
             }
             
        }
        //vector<vector<int>> ans;
        /*for(auto triplets:res)
        {
            ans.push_back(triplets);
        }
        return ans;*/
        return res;
    }
};