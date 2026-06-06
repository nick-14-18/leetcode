class Solution {
public:
    bool isPerfectSquare(int num) {
        long long low=1;
        long long high=num;
       
        while(low<=high){
            long long mid=0;
            long long square=0;
            mid=low+(high-low)/2;
            square=mid*mid;
        
        if(square==num){
            return true;
        }
        else if(square<num){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
       
    }
     return false;
    }
    
};