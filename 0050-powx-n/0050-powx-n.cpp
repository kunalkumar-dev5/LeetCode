class Solution {
public:
    double myPow( long double x, int n) {
        long long power = n;
       long double answer = 1.0;
        if(power < 0){
            x= 1.0/x
            ;
            power = -power;
        }

       
        while(power > 0){
            if(power % 2==1){
                answer  *=x;
            }
            x*=x;
            power /=2;

        }
        return (double)answer;
    }
};