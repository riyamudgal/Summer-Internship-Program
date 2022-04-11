class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size()>1){
            sort(stones.begin(), stones.end());
            int x=stones[stones.size()-2];
            int y=stones[stones.size()-1];
        
            if(x==y){
                stones.pop_back();
                stones.pop_back();
            }
            else{
                stones.pop_back();
                stones.pop_back();
                stones.push_back(y-x);
            }
        }
        if(stones.size()==0)
            return 0;
        else
            return stones[0];
    }
};

