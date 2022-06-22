public:
    string digitSum(string s, int k) {
        while(s.size()>k){
            string res= "";
            for(int i=0; i<s.size(); i++){
                int sum=0, count=0;
                while(i<s.size() && count<k){
                    sum+=s[i]-'0';
                    i++;
                    count++;
                }
                res+= to_string(sum);
                i--;
            }
            s=res;
        }
        return s;
    }
};
