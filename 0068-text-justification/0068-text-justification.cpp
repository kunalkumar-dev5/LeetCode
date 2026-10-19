class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
       vector<string> result;
       int n = words.size();
       int i =0;

       while(i<n){
        int j = i;
        int lineLen =0;
        while(j<n && lineLen + words[j].size() + (j-i) <= maxWidth){
            lineLen += words[j].size();
            j++;
        }
        int numWords =j-i;
        int gaps = numWords-1;
        int totalSpaces = maxWidth - lineLen;
        string line;

        if(j == n || numWords ==1){
            for(int k =i; k<j; k++){
                line += words[k];
                if(k<j-1) line += " ";

            }
            line += string(maxWidth - line.size(), ' ');
        }else{
            int spacePerGap = totalSpaces / gaps;
            int extra = totalSpaces % gaps;

            for(int k = i; k < j; k++){
                line += words[k];
                if(k < j-1){
                    int spaces = spacePerGap + (k-i < extra ? 1:0 );
                    line += string(spaces, ' ');
                }
            }
        }
        result.push_back(line);
        i=j;
       } 
       return result;
    }
};