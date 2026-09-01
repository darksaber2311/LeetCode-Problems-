class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo = 0;
        int hi = nums.size()-1;
        if(lo == hi && target == nums[lo]) return lo;
        while(lo < hi)
        {
            int mid = (hi + lo)/2;
            if(target == nums[mid]) return mid;
            else if(target == nums[lo]) return lo;
            else if(target == nums[hi]) return hi;
            else if(nums[lo] < nums[mid])
            {
                if(target > nums[mid] || target<nums[lo])
                {
                    lo = mid+1;
                }
                else if(target < nums[mid] && target > nums[lo])
                {
                    hi = mid-1;
                }
            }
            else if(nums[lo] > nums[mid])
            {
                if(target > nums[lo] || target < nums[mid])
                {
                    hi = mid-1;
                }
                else lo = mid+1;
            }
            else if(nums[lo] == nums[mid]) hi = lo;
            // 5,6,7,0,1,2,4
            // 4,5,6,7,0,1,2
            // 2,4,5,6,7,0,1
            // 7,0,1,2,4,5,6
            // 6,7,0,1,2,4,5 
            
        }
        //if(nums[lo] == target) return lo;
        return -1;
    }
};