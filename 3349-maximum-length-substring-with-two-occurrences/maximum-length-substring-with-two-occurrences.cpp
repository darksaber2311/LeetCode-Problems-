class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<int,int> map;
        int left = 0;
        int max_length = 0;
        for(int right = 0;right<s.size();right++)
        {
            map[s[right]]++;
            while(map[s[right]] > 2)
            {
                map[s[left]]--;
                left++;
            }
            max_length = max(max_length,right-left+1);

        }
        return max_length; 
    }
};