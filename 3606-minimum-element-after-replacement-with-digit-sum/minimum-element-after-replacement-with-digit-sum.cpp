class Solution {
public:
    int minElement(vector<int>& nums) {
        int min_ele=INT_MAX;
        for(int i=0; i<nums.size(); i++){
            int number=nums[i];
            int sum=0;
            
            while(number>0){
                sum=sum+number%10;
                number=number/10;
            }
           min_ele=min(min_ele,sum);
        }
        return min_ele;
        
    }
};