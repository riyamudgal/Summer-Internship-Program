//TLE
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int temp=0;
        for(int i=0;i<nums.size()-1;i+2)
            temp=temp+nums[i];
        return temp;
    }
};


//OP
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int temp=0;
        for(int i=0;i<nums.size()-1;i+=2)
            temp=temp+nums[i];
        return temp;
    }
};
