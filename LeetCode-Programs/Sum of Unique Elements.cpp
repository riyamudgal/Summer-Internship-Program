class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
        for(int i=0; i<nums.size(); i++) 
        {
            int count=0;
            for(int j=0; j<nums.size(); j++)
            {
                if (nums[i]==nums[j])
                    count++;
            }
            if (count==1)     
                sum= sum+nums[i]; 
        }
        return sum;
    }
};








//second
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int> vec;
        for(int i=0;i<nums.size();i++)
        {
            if(count(nums.begin(), nums.end(), nums[i])==1)
                vec.push_back(nums[i]);
        }
        return accumulate(vec.begin(), vec.end(), 0);
    }
};
