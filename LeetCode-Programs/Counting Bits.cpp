class Solution {
public:
    vector<int> countBits(int n) {
        int count=0;
        vector<int> vec;
        for(int i=0;i<=n;i++)
        {
            int temp=i;
            while(temp!=0)
            {
                if(temp%2==1)
                    count++;
                temp=temp/2;
            }
            vec.push_back(count);
            count=0;
        }
        return vec;
    }
};
