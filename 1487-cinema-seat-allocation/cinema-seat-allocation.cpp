class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int,vector<int>> reserved;
        for(int i = 0;i<reservedSeats.size();i++)
        {
            reserved[reservedSeats[i][0]].push_back(reservedSeats[i][1]);
        }
        int grp_count = (n-reserved.size())*2;
        
        for(auto &row:reserved)
        {
            bool left = true;
            bool right = true;
            bool middle  = true; 
            //int count = 2;
            for(auto x : row.second)
            {
                if(x>=2 && x<=5)
                {
                    left = false;
                }
                if(x>=6 && x<=9)
                {
                    right = false;
                }
                if(x>=4 && x<=7) middle  = false;

            }
            if(right && left)
            {
                grp_count+=2;
            }
            else if(right||left||middle)
            {
                grp_count+=1;
            }
            //else grp_count+=0;
            
        }
        return grp_count;
    }
};