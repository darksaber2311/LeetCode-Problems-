class Solution {
public:
    int maxNumberOfBalloons(string text) {
       
      vector<int>freq(5);
      vector<int> count = {1,1,2,2,1};
      vector<char>c = {'b','a','l','o','n'};
      for(int i=0;i<freq.size();i++)
      {
        for(int j=0;j<text.size();j++)
        {
            if(c[i] == text[j])
            {
                freq[i]++;
            }
        }
        if(freq[i]<count[i])
        {
            return 0;
        }
      }
      int mn = INT_MAX;
      for(int i=0;i<freq.size();i++)
      {
        mn = min(mn,freq[i]/count[i]);
      }
      return mn;
    }
};