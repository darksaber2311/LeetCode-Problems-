class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        if(nums[high] > nums[low]) return nums[low];
        if(nums.size()<2)return nums[0];
        while(true)
        {
            int mid = (high+low)/2;
            if(nums[mid+1] < nums[mid])
            {
                return nums[mid+1];
            }
            if(nums[mid-1] > nums[mid])
            {
                return nums[mid];
            }
            if(nums[low+1] < nums[low])
            {
                return nums[low+1];
            }
            if(nums[mid] < nums[low])
            {
                high = mid;
            }
            if(nums[mid] > nums[high])
            {
                low = mid;
            }


        }
    }

    // 2,3,4,5,1
    //4,5,1,2,3
    //3,4,5,1,2
    //5,1,2,3,4
    // 1,2,3,4,5
    //2,3,4,5,1

    // 1,2,3,4,5,6
    // 2,3,4,5,6,1
    //6,1,2,3,4,5

    // 6,7,0,1,2,4,5
   // 2,4,5,6,7,0,1
};