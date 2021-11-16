class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector <int>vec=heights;
        sort(heights.begin(),heights.end());
        int count=0;
        for(int i=0;i<heights.size();i++)
        {
            if(heights[i]!=vec[i])
            {
                count++;
            }
        } 
        return count;
    }
};
