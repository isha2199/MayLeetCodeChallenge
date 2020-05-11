class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor)    
    {
        DFS(image, sr, sc, newColor, image[sr][sc]);
        return image;
    }
    void DFS(vector<vector<int>>& image, int row, int col, int newColor, int oldColor)
    {
        if(row < 0 || col < 0 || row >= image.size() || col >= image[0].size() || image[row][col]==newColor)
            return ;
        if(image[row][col] == oldColor){
            image[row][col] = newColor;
            DFS(image, row - 1, col, newColor, oldColor);
            DFS(image, row + 1, col, newColor, oldColor);
            DFS(image, row, col - 1, newColor, oldColor);
            DFS(image, row, col + 1, newColor, oldColor);
        }
    }
};
