class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int>map;
        int max_length = INT_MIN;
        int count;
        int left = 0;
        if(s.empty())
        {
            return 0;
        }
        for(int right = 0;right<s.size();right++)
        {
            map[s[right]]++;
            while(map[s[right]]>1)
            {
                map[s[left]]--;
                left++;
            }
            max_length = max(max_length,right-left+1);
        }
        return max_length;
    }
};