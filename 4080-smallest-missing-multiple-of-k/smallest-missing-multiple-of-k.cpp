class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int res = 0;
        int max_multiple = k;
        int min_multiple = INT_MAX;
        int checker = k;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i] == checker)
            {
                //max_multiple = max(max_multiple,nums[i]);
                //min_multiple = min(min_multiple,nums[i]);
                checker+=k;


            }
        }
        //if(min_multiple == k)return max_multiple + k;
        return checker;
    }
};