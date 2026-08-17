class Solution {
public:
    bool neighbourExist(vector<vector<int>>&grid,int x, int y)
    {
        if( x < 0 || x >= grid.size() || y<0 || y>=grid[0].size()) return false;
        if(grid[x][y] == 1) return true;
        return false;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        queue<pair<int,int>>plot;
        vector<vector<bool>>visited(grid.size(),vector<bool>(grid[0].size(),false));
        int max_area = 0;
        for(int i = 0;i<grid.size();i++)
        {
            for(int j = 0;j<grid[0].size();j++)
            {
                if(visited[i][j]!=true && grid[i][j]==1)
                {
                    int count = 0;
                    plot.push({i,j});
                    while(!plot.empty())
                    {
                        pair<int,int> curr = plot.front();
                        int x = curr.first;
                        int y = curr.second;
                        if(neighbourExist(grid,x-1,y) &&!visited[x-1][y])
                        {
                            visited[x-1][y] = true;
                            plot.push({x-1,y});
                            //count++;
                        }
                         if(neighbourExist(grid,x+1,y)&&!visited[x+1][y])
                        {
                            visited[x+1][y] = true;
                            plot.push({x+1,y});
                            //count++;
                        }
                         if(neighbourExist(grid,x,y-1)&&!visited[x][y-1])
                        {
                            visited[x][y-1] = true;
                            plot.push({x,y-1});
                            //count++;
                        }
                         if(neighbourExist(grid,x,y+1)&&!visited[x][y+1])
                        {
                            visited[x][y+1] = true;
                            plot.push({x,y+1});
                            //count++;
                        }
                        count++;
                        plot.pop();
                        visited[x][y] = true;
                    }
                    max_area = max(count,max_area);
                }
            }
        }
        return max_area;

    }
};