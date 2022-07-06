class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int sum=0;
        int i= piles.size()-2, j=0;
        while(j++ < piles.size()/3){
            sum+=piles[i];
            i-=2;
        }
        return sum;
    }
};