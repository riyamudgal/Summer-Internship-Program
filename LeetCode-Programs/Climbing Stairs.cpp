class Solution {
public:
    int climbStairs(int n) {
        int c=0,a=1,b=2;
        
        if(n<=0) 
            return 0;
        if(n==1) 
            return 1;
        if(n==2) 
            return 2;
    
        for(int i=2;i<n;i++)
        {
    	      c=b+a;
    	      a=b;
            b=c;
        }
        return c;
    }
};
