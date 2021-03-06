class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        /*int n=nums.size();
        vector<int> res(n,1);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i==j)
                    continue;
                res[i]=res[i]*nums[j]; 
            }
        }

        return res;*/
        int n=nums.size();
        vector<int> res(n);
        vector<int> left(n);
        vector<int> right(n);
        
        left[0]=1;
        for(int i=1;i<n;i++)
        {
            left[i]=left[i-1]*nums[i-1];
        }
        right[n-1]=1;
        for(int j=n-2;j>=0;j--)
        {
            right[j]=right[j+1]*nums[j+1];
        }
        for(int k=0;k<n;k++)
        {
            res[k]=left[k]*right[k];
        }
        return res;
    }
};
