class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int checker = k;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i] == checker)
            { 
                checker+=k;
            }
            else if(checker < nums[i]) return checker;
        }
        
        return checker;
    }
};