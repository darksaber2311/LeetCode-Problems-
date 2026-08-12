class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        int left = 0;
        int max_length = 0;
        int count = 0;
        for(int right = 0;right<nums.size();right++)
        {
            map[nums[right]]++;
            while(map[nums[right]] > k)
            {
                map[nums[left]]--;
                left++;
            }
            //else{count++;}
            max_length = max(max_length,right-left+1);

        }
        return max_length;
    }
};