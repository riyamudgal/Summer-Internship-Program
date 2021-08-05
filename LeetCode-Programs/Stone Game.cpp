class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int sum=0;
        for(int i=0;i<piles.size();i++)
        {
            sum=sum+piles[i];
        }
        int a=0, l=0;
        int i=0, j=piles.size()-1, n=0;
        while(n<(piles.size())/2)
        {
            if(piles[i]>=piles[j])
            {
                a=a+piles[i];
            }
            else if(piles[i]<piles[j])
            {
                a=a+piles[j];
            }
            i++;
            j--;
            n++;
        }
        l=sum-a;
        if (a>l)
            return true;
        else 
            return false;
    }
};
