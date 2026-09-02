class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        // 3 , 5 , 2, 7 
        int min_odd = INT_MAX;
        int index = -1;
        for(int i = 0;i<nums1.size();i++)
        {
            if(nums1[i] % 2!=0 && nums1[i] < min_odd)
            {
                index = i;
                min_odd = nums1[i];
            }
        }
        if(index == -1)return true;
        else
        {
            for(int i = 0;i<nums1.size();i++)
            {
                if(nums1[i]%2 == 0 && nums1[i]<nums1[index])
                {
                    return false;
                }
            }
        }
        return true;
    }
};