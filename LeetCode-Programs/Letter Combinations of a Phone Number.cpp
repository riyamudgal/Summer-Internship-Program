/*
Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.


 

Example 1:

Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
Example 2:

Input: digits = ""
Output: []
Example 3:

Input: digits = "2"
Output: ["a","b","c"]
 

Constraints:

0 <= digits.length <= 4
digits[i] is a digit in the range ['2', '9'].
*/



class Solution {
public:
    void solve(string digits, vector<string> &ans, int i, string output, string str[]){
        if(i>=digits.length()){
            ans.push_back(output);
            return;
        }
        int temp=digits[i]-'0';
        string s=str[temp];
        
        for(int j=0; j<s.length(); j++){
            output.push_back(s[j]);
            solve(digits, ans, i+1, output, str);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        string str[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> ans;
        if(digits.length()==0)
            return ans;
        string output="";
        int index=0;
        solve(digits, ans, index, output, str );
        return ans;
    }
};
