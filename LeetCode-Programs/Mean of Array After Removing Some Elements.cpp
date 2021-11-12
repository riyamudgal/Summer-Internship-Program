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




//second
class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n=arr.size(),count=0;
        sort(arr.begin(),arr.end());
        int per=n*5/100;
        double sum=0,ans=0;
        for(int i=per;i<n-per;i++)
        {
            count++;
            sum=sum+arr[i];
        }
        ans=sum/count;
        return ans;
    }
};
    }
};
