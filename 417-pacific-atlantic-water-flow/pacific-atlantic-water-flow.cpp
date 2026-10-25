class Solution {
public:
    void dfs(vector<vector<int>>& heights,int x,int y,vector<vector<int>> &vis)
    {
        int row = heights.size();
        int col = heights[0].size();
        vis[x][y] = 1;
        int dx[] = {-1,1,0,0};
        int dy[] = {0,0,-1,1};

        for(int i = 0;i<4;i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx<0 || ny<0 || nx>=row || ny>=col)continue;
            if(vis[nx][ny])continue;
            if(heights[nx][ny] >= heights[x][y])
            {
                dfs(heights,nx,ny,vis);
            }
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {

        vector<vector<int>> res;
        int row = heights.size();
        int col = heights[0].size();
        vector<vector<int>> pacific(row,vector<int>(col,0));
        vector<vector<int>> atlantic(row,vector<int>(col,0));

        for(int i = 0;i<row;i++)
        {
            dfs(heights,i,0,pacific);
        }
        for(int j = 0;j<col;j++)
        {
            dfs(heights,0,j,pacific);
        }

        for(int i = 0;i<row;i++)
        {
            dfs(heights,i,col-1,atlantic);
        }
        for(int j = 0;j<col;j++)
        {
            dfs(heights,row-1,j,atlantic);
        }

        for(int i = 0;i<row;i++)
        {
            for(int j = 0;j<col;j++)
            {
                if(pacific[i][j] && atlantic[i][j])
                {
                    res.push_back({i,j});
                }
            }
        }
        return res;
        
    }
};