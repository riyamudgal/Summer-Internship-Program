class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int a=0, b=0;
        vector<int> vec;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]==nums[i+1]){
                a++;
                nums[i]=-1;
                nums[i+1]=-1;
                i++;
            }
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=-1)
                b++;
        }
        vec.push_back(a);
        vec.push_back(b);
        return vec;
    }
};
