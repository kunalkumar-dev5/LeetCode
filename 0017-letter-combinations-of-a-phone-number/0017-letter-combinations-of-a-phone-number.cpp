class Solution {
public:

   vector<string> result;

   void backtrack(int index, string &digits, string &current,vector<string>&mapping){
    if(index == digits.size()){
        result.push_back(current);
        return ;
    }
    int digit = digits[index] -'0';
    string letters = mapping[digit];

    for(char ch : letters){
        current.push_back(ch);
        backtrack(index +1, digits, current, mapping);
        current.pop_back();
    }
   }
    vector<string> letterCombinations(string digits) {
        if(digits.empty()){
            return {};
        }

        vector<string>mapping ={
            "", 
            "",
            "abc",
            "def",
            "ghi",
            "jkl",
            "mno",
            "pqrs",
            "tuv",
            "wxyz"
        };
        string current = "";
        backtrack(0,digits, current, mapping);

        return result;
    }
};