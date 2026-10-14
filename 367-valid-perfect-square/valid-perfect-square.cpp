class Solution {
public:
    bool isPerfectSquare(int num) {
       long long l=1,r=num,mid,sq;
       while(l<=r){
        mid=(l+r)/2;
        sq=mid*mid;
        if(sq==num)
        return true;
        else if(sq<num)
        l=mid+1;
       
       else
        r=mid-1;
       }
     return false;
    }
};