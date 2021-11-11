class Solution {
public:
    double trimMean(vector<int>& arr) {
        int remove=0.05*arr.size();         //calculating 5 percent of array
        
        sort(arr.begin(),arr.end());
        
        arr.erase(arr.begin(),arr.begin()+remove);
        arr.erase(arr.end()-remove,arr.end());
        
        double sum=0;
        
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
        }
        return (sum/arr.size());
    }
};
