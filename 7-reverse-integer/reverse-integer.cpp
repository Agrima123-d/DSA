class Solution {
public:
    int reverse(int x) {
        long long  rem,rev=0;
        while(x!=0){
            rem=x%10;
            rev=10*rev+rem;
            x=x/10;
            if(rev>INT_MAX||rev<INT_MIN){
                return 0;
            }
        }
        return (int)rev;
    }
};