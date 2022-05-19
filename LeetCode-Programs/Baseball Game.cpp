class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> vec;
        for(int i=0; i<ops.size(); i++){
            if(ops[i]=="+")
                vec.push_back(vec[vec.size()-1]+vec[vec.size()-2]);
            else if(ops[i]=="D")
                vec.push_back(vec[vec.size()-1]*2);
            else if(ops[i]=="C")
                vec.pop_back();
            else
                vec.push_back(stoi(ops[i]));
        }
        return accumulate(vec.begin(), vec.end(), 0);
        
    }
};
