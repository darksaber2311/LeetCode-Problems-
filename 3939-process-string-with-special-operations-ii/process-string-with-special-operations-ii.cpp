class Solution {
public:
    char processStr(string s, long long k) {
        vector<long long >len(s.size());
        const long long LIMIT = 1e18;
        long long curr = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a'&&s[i]<='z')
            {
                curr++;
            }
            else if(s[i] == '*')
            {
                if(curr>0)
                {
                    curr--;
                }    
            }
            else if(s[i] == '#')
            {
                curr = min(LIMIT,curr*2);
            }
            len[i] = curr;
        }
        if(k>=curr)
        {
            return '.';
        }
        for(int i=s.size()-1;i>=0;i--)
        {
            long long prev = (i==0)?0:len[i-1];
            if(s[i]>='a'&& s[i]<='z')
            {
                if(k==prev)
                {
                    return s[i];
                }
            }
            else if(s[i] == '#')
            {
                if(k>=prev)
                {
                    k-=prev;
                }
            }
            else if(s[i] == '%')
            {
                k = len[i]-k-1;
            }
        }
        return '.';


    }
};