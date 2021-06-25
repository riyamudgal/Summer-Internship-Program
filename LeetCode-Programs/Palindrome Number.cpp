class Solution {
public:
    bool isPalindrome(int x) {
       long long int num=0,y,temp=x;
        
        while(x>0)
        {
            y=x%10;
            x=x/10;
            num=num*10+y;
            cout<<num<<" ";
        }
        
        if(num==temp)
        {
            return true;
        }
        return false;
    }
};
