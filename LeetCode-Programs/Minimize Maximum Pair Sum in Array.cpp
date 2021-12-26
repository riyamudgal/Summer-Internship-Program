class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i=0, j=nums.size()-1,m_sum=0,summ=0;
        while(i<j)
        {
            summ=nums[i]+nums[j];
            m_sum=max(m_sum, summ);
            i++;
            j--;
        }
        return m_sum;
    }
};
