class Solution {
public:
    bool neighbourExist(vector<vector<int>>&image,int x, int y, int color)
    {
        if(x<0 || x>=image.size() || y<0 || y>=image[0].size() )return false;
        else if(image[x][y] == color) return true;
        return false;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        queue<pair<int,int>> pixels;
        int orig_color =  image[sr][sc];
        if(orig_color == color)
        {
            return image;
        }
        image[sr][sc] = color;
        pixels.push({sr,sc});
        while(!pixels.empty())
        {
        pair<int,int> curr = pixels.front();
        if(neighbourExist(image,curr.first-1,curr.second,orig_color))
        {
            pixels.push({curr.first-1,curr.second});
            image[curr.first-1][curr.second] = color;
        }
        if(neighbourExist(image,curr.first+1,curr.second,orig_color))
        {
            pixels.push({curr.first+1,curr.second});
            image[curr.first+1][curr.second] = color;
        }
        if(neighbourExist(image,curr.first,curr.second-1,orig_color))
        {
            pixels.push({curr.first,curr.second-1});
            image[curr.first][curr.second-1] = color;
        }
        if(neighbourExist(image,curr.first,curr.second+1,orig_color))
        {
            pixels.push({curr.first,curr.second+1});
            image[curr.first][curr.second+1] = color;
        }
        pixels.pop();
        }
     
            
        return image;


    }
};