class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        // i am not doing this soln. by O(log(m+n)) i am implementing O(m+n)
        int p1 = 0;
        int p2 = 0;
        int m = nums1.size();
        int n = nums2.size();
        vector<double> merged;
        while(p1<m && p2<n)
        {
            if(nums1[p1] <= nums2[p2])
            {
                merged.push_back(nums1[p1]);
                p1++;
            }
            else
            {
                merged.push_back(nums2[p2]);
                p2++;
            }
        }
        if(p1 < m)
        {
            for(int i = p1;i<m;i++)
            {
                merged.push_back(nums1[i]);
            }
        }
        if(p2 < n)
        {
            for(int i = p2;i<n;i++)
            {
                merged.push_back(nums2[i]);
            }
        }

        // calculating median on merged array 
        
        if((m+n)%2!=0) return merged[(m+n)/2];
        return (merged[((m+n)/2)-1] + merged[(m+n)/2])/2;
        //return merged.size();
    }
};