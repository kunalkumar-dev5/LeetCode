class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int start = 0, maxLen = 1;

        auto expand = [&](int l, int r){
            if(r>= n || s[l] != s[r]) return;
            while(l>0 && r < n-1 && s[l-1] == s[r+1]){
                l--;
                r++;
            }
            int len = r-l +1;
            if(len > maxLen){
                maxLen = len;
                start = l;
            }
        };
        for(int i =0; i< n; i++){
            expand(i,i);
            expand(i, i+1);
        }
        return s.substr(start, maxLen);
    }

};