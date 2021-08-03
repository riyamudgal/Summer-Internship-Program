class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int temp,maxp=0;
    temp=prices[0];                                  
    for(int i=0;i<prices.size();i++) 
    {
        if(temp>prices[i])                                  
            
            temp=prices[i];                                   
        
       if( (prices[i]-temp) > maxp)                          
           maxp=prices[i]-temp;                              
    }
    return maxp;
}
    
};
