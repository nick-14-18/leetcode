class Solution {
public:
    int mySqrt(int x) {
        long long m=0,n=x;
        while(m<=n){
            long long s=m+(n-m)/2;
            if(s*s<=x){
                m=s+1;
            }
            else{
                n=s-1;
            }

        }
        return n;
        
    }
};