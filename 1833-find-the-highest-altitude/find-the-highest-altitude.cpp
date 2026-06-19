class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int mx= 0;
        int height  = 0;
        for (int i=0;i<gain.size();i++)
        {
            height+=gain[i];
            mx = max(mx,height);
        }
        return mx;
    }
};