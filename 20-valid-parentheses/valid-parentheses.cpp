class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        queue<char>q;
        for(int i = 0;i<s.size();i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
            }
            if(s[i] == ')' || s[i] == '}' || s[i] == ']')
            {
                if(st.empty())return false;
                int top = st.top();
                if(  (top == '('&&s[i] == ')' ) || (top == '{'&&s[i] == '}' ) || (top == '['&&s[i] == ']' ) )
                {
                    st.pop();
                }
                else return false;
            }
        }
        return st.empty();
    }
};