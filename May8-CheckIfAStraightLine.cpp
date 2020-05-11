class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        for(int i = 1;coordinates.size()<3;i++)
            return true;
        
        float x1 = coordinates[0][0];
        float y1 = coordinates[0][1];
        float x2 = coordinates[1][0];
        float y2 = coordinates[1][1];
        
		for(int i = 3;i<coordinates.size();i++)
        {
            int xcoord = coordinates[i][0];
		    int ycoord = coordinates[i][1];
            if((y2-y1)*(xcoord-x1) != (ycoord-y1)*(x2-x1))
				return false;
		}
		return true;
    }
};
