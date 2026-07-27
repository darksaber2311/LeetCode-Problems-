class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int index1 = 0;
        int index2 = 0;
        int mx = INT_MIN;
        int mx2 = INT_MIN;
        int product = 1;
        for(int i = 0;i<nums.size();i++)
        {
            mx = max(mx,nums[i]);
            if(mx == nums[i])
            {
                index1 = i;
            }
        }
        product*=(mx -1 );
        for(int i = 0;i<nums.size();i++)
        {
            if(i != index1)
            {
                mx2 = max(mx2,nums[i]);
            }
            
        }
        product*=(mx2-1);
        return product;
    }
};