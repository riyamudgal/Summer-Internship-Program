class Solution {
public:
    string addStrings(string num1, string num2) {
        
        int n1=num1.length(), n2=num2.length();
        
        if(n1==0 && n2==0) 
            return "0";
        
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        
        string new_str="";
        int carry=0, i=0, j=0;
        
        while(i<n1 || j<n2 || carry)
        {
            if(i<n1) 
            {
                carry=carry+num1[i]-'0';
                i++;
            }
            if(j<n2)
            {
                carry=carry+num2[j]-'0';
                j++;
            }
            new_str+=(carry%10)+'0';
            carry=carry/10;
        }
        reverse(new_str.begin(), new_str.end());
        return new_str;
    }
};
