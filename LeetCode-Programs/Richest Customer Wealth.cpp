class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxx=0;
        
        for (int i=0;i<accounts.size();i++)
        {
           int great=0;
            for (int j=0;j<accounts[i].size();j++)
            {
                great=great+accounts[i][j];
            }
            maxx=max(maxx,great);
        }
        
        return maxx;
    }
};
