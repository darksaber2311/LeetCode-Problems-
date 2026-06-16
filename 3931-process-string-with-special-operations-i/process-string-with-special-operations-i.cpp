class Solution {
public:
    string processStr(string s) {
        //vector<char> result;
        string res = "";
        int size = 0;
        for(char x:s)
        {
            if(int(x)>=97&&int(x)<=122)
            {
                res+=x;
            }
            else if(!res.empty()&&x == '#')
            {
                string store = res;
                res+=store;
            }
            else if(!res.empty()&&x == '%')
            {
                string store1 = res;
                for(int i=0;i<res.size();i++)
                {
                    res[i] = store1[res.size()-1-i];
                }
            }
            else if(!res.empty()&&x == '*')
            {
                res.erase(res.size()-1,1);
            }

        }
        return res;
        




























      /*  for(char x:s)
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
        return res;*/
    }
};