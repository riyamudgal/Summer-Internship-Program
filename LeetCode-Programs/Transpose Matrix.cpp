class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> mat;
        vector<int> temp;
        for (int i=0;i<n;i++)
        {
            temp.clear();
            for(int j=0;j<m;j++)
            {
                   temp.push_back(matrix[j][i]);
            }
            mat.push_back(temp);
        }
     return mat;
        
    }
};


#second 
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
       int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<n;j++)
            {
                mat[j][i]=matrix[i][j];
            }
        }
        return mat;
    }
};
