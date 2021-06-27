class Solution {
public:
    int reverse(int x) 
    {
    if(x>=INT_MAX || x<=INT_MIN) 
      return 0;
   
    int rev=0,n=abs(x);
    while(n>0)
    {
        if(rev> INT_MAX/10)
           return 0;
        rev=rev*10+n%10;
        n=n/10;
    }
    if(x<0)
    
       return rev*(-1);
    
    return rev;
    }
};
