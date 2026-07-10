class Solution {
public:
    bool isPalindrome(int x) {
        long long  revNumber = 0;
        int dup = x;
        while(x>0){
            int lastDigit = x % 10;
            revNumber = revNumber * 10 + lastDigit;
            x = x /10;
        }
         return  dup == revNumber;
    }
   
};