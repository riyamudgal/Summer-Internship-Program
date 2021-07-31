class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> vec;
        int m=mat.size();
        int n=mat[0].size();
        int i=0, j=0;
        while (i<m && j<n)
            if ((i+j)%2==0)
            {
                vec.push_back(mat[i][j]);
                while (0<=i-1 && j+1<n)
                {   
                    vec.push_back(mat[i-1][j+1]);
                    i=i-1;
                    j=j+1;
                }
                if (j+1<n) 
                    j=j+1;
                else
                    i=i+1;
            }
            else if ((i+j)%2==1)
            {
                vec.push_back(mat[i][j]);
                
                while (i+1<m && 0<=j-1)
                {
                    vec.push_back(mat[i+1][j-1]);
                    i=i+1;
                    j=j-1;
                }
                if (i+1<m)
                    i=i+1;
                else
                    j=j+1;
            }       
        return vec;
    }
};
