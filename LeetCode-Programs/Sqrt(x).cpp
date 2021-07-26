class Solution {
public:
    int mySqrt(int x) {
        int s=sqrt(x);
        return s;
    }
};

#without using built in function
class Solution {
public:
    int mySqrt(int x) {
        long long start=0,end=x,mid;
        if (x<2)
            return x;
        while (start<=end)
        {
            mid=(start+end)/2;
            
            if (mid*mid>x)
                end=mid-1;
            else if (mid*mid<x)
                start=mid+1;
            else
                return mid;
        
        }
        return end;
        
    }
};
