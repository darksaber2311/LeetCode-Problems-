class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int count_target = 0;
        //int window_size = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == target)
            {
                count_target++;
            }
        }
        int window_size = 2*count_target-1;
        int count = 0;

        for(int i=0;i<nums.size();i++)
        {
            count_target = 0;
            int size = 1;
            int j = i;
            while (size<=window_size && j<nums.size())
            {
                if(nums[j]==target)
                {
                    count_target++;
                }
                if(count_target>=size/2+1)
                {
                    count++;
                }
                size++;
                j++;
            }
        }
        return count ;

    }
};