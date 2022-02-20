class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> s(candyType.begin(), candyType.end());
        if (s.size() > candyType.size()/2)
            return candyType.size()/2;
        else
            return s.size();
    }
};
