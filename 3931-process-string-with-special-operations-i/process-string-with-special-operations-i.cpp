class Solution {
public:
    string processStr(string s) {
        vector<char> result;
        string res = "";
        int size = 0;
        for(char x:s)
        {
            if(int(x)<=122&&int(x)>=97)
            {
                result.push_back(x);
            }
            else if(!result.empty() && x=='#')
            {  
                size = result.size();

                for(int i = 0;i<size;i++)
                {
                    result.push_back(result[i]);
                }
            }
            else if (!result.empty() && x == '%')
            {
                reverse(result.begin(),result.end());
            }
            else if(!result.empty() && x == '*')
            {
                result.pop_back();
            }
        }
        for(char c:result)
        {
            res+=c;
        }
        return res;
    }
};