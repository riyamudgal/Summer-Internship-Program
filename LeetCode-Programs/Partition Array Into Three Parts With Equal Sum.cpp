class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {        
        int total_sum= accumulate(arr.begin(), arr.end(), 0);
        int temp = total_sum/3;
        int sum=0, count=0;
        for(int i=0; i<arr.size(); i++){
            sum+=arr[i];
            if(sum==temp){
                count++;
                sum=0;
            }
        }
        return count>=3 && total_sum %3==0;
    }
};
