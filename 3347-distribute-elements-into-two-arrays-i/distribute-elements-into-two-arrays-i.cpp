class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        //vector<int> result(nums.size());
        vector<int> arr1;
        vector<int> arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        int pointer = 2;
        while(pointer<nums.size())
        {
            if(arr1.back() > arr2.back())
            {
                arr1.push_back(nums[pointer]);
            }
            else
            {
                arr2.push_back(nums[pointer]);
            }
            pointer++;
        }
        pointer = 0;
        while(pointer<nums.size())
        {
            if(pointer < arr1.size())
            {
                nums[pointer] = arr1[pointer];
            }
            else
            {
                nums[pointer] = arr2[pointer - arr1.size()];
            }
            pointer++;
        }
        return nums;
    }
};