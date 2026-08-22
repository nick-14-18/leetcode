class Solution {
public:
    bool checkDivisibility(int n) {
        int m=n;
        int sum=0;
        int product=1;
        while(n!=0){
            sum+=n%10;
            product*=n%10;
            n/=10;

        }
        if(m%(sum+product)==0){
            return 1;
        }
        else{
            return 0;
        }
        
        
    }
};