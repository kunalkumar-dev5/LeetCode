class Solution {
public:
    string countAndSay(int n) {
        string current = "1";

        for(int step =2; step <= n; step++){
            string next = "";
            int i =0;

            while(i < current.length()){
                int count =1;

                while(i+1< current.length() && 
                current[i] == current[i+1]){
                    count++;
                    i++;
                }
                next += to_string(count);
                next += current[i];
                i++;
            }
            current = next; 
        }
        return current;
    }
};