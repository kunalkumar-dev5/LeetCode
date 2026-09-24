class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;

        function<void(int,int , string)> solve=
        [&](int open, int close, string current){
            if(open ==n && close ==n){
                ans.push_back(current);
                return;
            }
            if(open<n){
                solve(open +1, close, current+'(');
            }
            if(close<open){
                solve(open,close+1, current+ ')');
            }
        };
        solve(0,0,"");
        return ans;
    }
};