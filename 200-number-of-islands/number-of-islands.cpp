class Solution {
public:
    int m ,n;
    void dfs(vector<vector<char>> &grid,int x,int y)
    {
        
        if(x < 0 || y<0 || x >= m || y>=n || grid[x][y] == '0')return;

        grid[x][y] = '0'; // visited 

        dfs(grid,x-1,y);
        dfs(grid,x,y-1);
        dfs(grid,x+1,y);
        dfs(grid,x,y+1);

    }
    int numIslands(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();
        int islands  = 0;

        for(int i = 0;i<m ;i++)
        {
            for(int j = 0; j < n;j++)
            {
                if(grid[i][j] == '1')
                {
                    islands++;
                    dfs(grid,i,j);
                }
                
            }
        }
        return islands;


    }
};