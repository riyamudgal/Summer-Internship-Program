class Solution {
public:
    bool judgeCircle(string moves) {
        int u=count(moves.begin(), moves.end(), 'U');
        int d=count(moves.begin(), moves.end(), 'D');
        int l=count(moves.begin(), moves.end(), 'L');
        int r=count(moves.begin(), moves.end(), 'R');
       
        if(u==d and l==r)
            return true;
        return false;
    }
};
