class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 =="0" ||  num2 == "0") return "0";

        int m = num1.size(), n= num2.size();
        vector<int> res(m+n,0);

        for(int i = m-1;i>= 0;i--){
            int d1 = num1[i] -'0';
            for(int j = n-1; j>=0; j--){
                int d2 = num2[j]-'0';
                int total = d1 *d2 + res[i+j+1];
                res[i+j+1] = total % 10;
                res[i+j]+= total/10;
            }
        }

        int  start = 0;
        while(start < res.size() && res[start] ==0) start++;

        string ans;
        for(int k = start ; k < res.size(); k++){
            ans.push_back(res[k]+'0');
        }
        return ans;
    }
};