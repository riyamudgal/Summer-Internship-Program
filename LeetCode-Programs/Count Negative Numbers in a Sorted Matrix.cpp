class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        /*int count = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] < 0)
                    count++;
            }
        }
        return count;*/
        
        int r=grid.size(), c=grid[0].size();
        int i=0, j=c-1, count=0;
        while(i<r && j>=0){
           
            if(grid[i][j]<0){
              count+=(r-i);                    
              j--;                           
            }
            else{
              i++;                          
            }
        }       
        return count;
    }
};
