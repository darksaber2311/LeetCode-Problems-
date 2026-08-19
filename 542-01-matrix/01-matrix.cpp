class Solution {
public:
    bool hasNeighbour(vector<vector<int>>&mat,int x, int y)
    {
        if(x<0 || x>=mat.size() || y<0 || y>= mat[0].size()) return false;
        if(mat[x][y] == 1) return true;
        return false;
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int mn_dist = INT_MAX;
        vector<vector<int>> res(mat.size(),vector<int>(mat[0].size(),mn_dist));
        queue<pair<pair<int,int>,int>> path_cost;
        //vector<vector<bool>> visited(mat.size(),vector<bool>(mat[0].size(),false));

        for(int i = 0;i<mat.size();i++)
        {
            for(int j = 0;j<mat[0].size();j++)
            {
                if(mat[i][j] == 0)
                {
                    res[i][j] = 0;
                    path_cost.push({{i,j},0});
                }
                
            }
        }
        
        while(!path_cost.empty())
        {
            pair<int,int>curr = path_cost.front().first;
            int x = curr.first;
            int y = curr.second;
            int prev_cost = path_cost.front().second;
            if(hasNeighbour(mat,x-1,y) && res[x-1][y] == INT_MAX)
            {
                res[x-1][y] = min(res[x-1][y],prev_cost+1);
                path_cost.push({{x-1,y},prev_cost+1});
            }
            if(hasNeighbour(mat,x+1,y) && res[x+1][y] == INT_MAX)
            {
                res[x+1][y] = min(res[x+1][y],prev_cost+1);
                path_cost.push({{x+1,y},prev_cost+1});
            }
            if(hasNeighbour(mat,x,y-1) && res[x][y-1] == INT_MAX)
            {
                res[x][y-1] = min(res[x][y-1],prev_cost+1);
                path_cost.push({{x,y-1},prev_cost+1});
            }
            if(hasNeighbour(mat,x,y+1) && res[x][y+1] == INT_MAX)
            {
                res[x][y+1] = min(res[x][y+1],prev_cost+1);
                path_cost.push({{x,y+1},prev_cost+1});
            }
            path_cost.pop();
            //visited[curr.first][curr.second] = true;
        }
                
            
        
        return res;
    }
};