class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n;
        for(int i=0;i<arr.size();i++)
        {
            n=2*arr[i];
            for(int j=0;j<arr.size();j++)
            {
                if(j!=i && n==arr[j])
                    return true;
            }
        }
        return false;
        
    }
};
