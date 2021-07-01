class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
     vector<int> v;
     for(int i=0;i<nums.size();i++)
     {
        int n=abs(nums[i]); 
        if(nums[n-1]<0) 
        v.push_back(n); 
        nums[n-1]=-nums[n-1];
        }
    return v;
}
};
