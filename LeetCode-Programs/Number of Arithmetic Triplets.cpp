class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {;
        /*int ans=0;
        for(int i=0; i<nums.size()-2; i++){
            for(int j=i+1; j<nums.size()-1; j++){
                for(int k=j+1; k<nums.size(); k++){
                    if(nums[j] - nums[i]== diff && nums[k] - nums[j]== diff)
                        ans++;
                }
            }
        }
        return ans;*/
                                                         
        int ans=0;
        unordered_map<int, int> mp;
        /*for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }*/
        for(auto i: nums){
            mp[i]++;
        }
        for(auto i: nums){
            if(i-diff>=0 && mp[i-diff] && mp[i-2*diff])
                ans++;
        }
        return ans;
                                                         
    }
};
