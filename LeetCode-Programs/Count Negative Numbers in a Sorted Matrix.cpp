class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        int r= grid.size(), c= grid[0].size();
        int i=0, j=c-1;
        while(i<r && j>=0){
            if(grid[i][j]<0){
                count=count+(r-i);
                j--;
            }
            else
                i++;
        }
        return count;
    }
};
