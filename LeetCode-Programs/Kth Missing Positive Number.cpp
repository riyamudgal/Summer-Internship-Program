class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int temp=1, count=0, n=arr.size(), i=0, ans=0;
        while(i<arr.size()){
            if(arr[i]==temp){
                i++;
                temp++;
            }
            else{
                count++;
                if(count==k)
                    ans=temp;
                temp++;
            }
        }
        return count<k? ans+=arr[n-1]+(k-count): ans ;
    }
};
