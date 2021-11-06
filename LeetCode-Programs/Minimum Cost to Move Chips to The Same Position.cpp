class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int e_count=0;
        int o_count=0;
        for(int i=0;i<position.size();i++)
        {
            if(position[i]%2==0)
                e_count++;
            else
                o_count++;
        }
        return min(e_count, o_count);
        
    }
};
