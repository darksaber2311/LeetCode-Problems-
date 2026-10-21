class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>res;
        for(int mask = 0;mask<(1<<n);mask++)
        {
            vector<int>store;
            for(int j = 0;j<n;j++)
            {
                if(mask & (1<<j))store.push_back(nums[j]);
            }
            res.push_back(store);
        }
        return res;

    }
};