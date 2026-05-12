class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> nums;
        while(n!=1 && nums.find(n)==nums.end()){
            nums.insert(n);
            int sum=0;
            while(n>0){
                int r=n%10;
                sum+=r*r;
                n=n/10;
            }
            n=sum;
        }
        return n==1;
    

    }
};