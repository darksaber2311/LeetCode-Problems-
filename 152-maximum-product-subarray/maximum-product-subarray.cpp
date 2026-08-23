class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //int product = 1;
        int max_product = INT_MIN;
        int product = 1;
        //int start = 0;
        //int window_size = 1;
        //int end  = start+window_size;
        long long currMax = nums[0];
        long long currMin = nums[0];
        long long ans = nums[0];
        for(int i = 1;i<nums.size();i++)
        {
            long long x = nums[i];
            long long oldMax = currMax;
            long long oldMin = currMin;

            currMax = max({x,x*oldMax,x*oldMin});
            currMin = min({x,x*oldMax,x*oldMin});

            ans = max(ans,currMax);
        }
        return int(ans);
    }
};