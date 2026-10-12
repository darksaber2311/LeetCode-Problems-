class Solution {
public:
    bool isPalindrome(string s) {
     int p = 0;
     int q = s.size()-1;   
     while(p<q)
     {
        if(!isalnum(s[p]))
        {
            p++;
        }
        if(!isalnum(s[q]))
        {
            q--;
        }
        if(isalnum(s[p]) && isalnum(s[q]) && tolower(s[p]) != tolower(s[q])) return false;
        else if (isalnum(s[p]) && isalnum(s[q]) && tolower(s[p]) == tolower(s[q]))
        {
            p++;
            q--;
        }
     }   
     return true;
    }
};