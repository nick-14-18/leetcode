class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int min_index=INT_MAX;
        int j=0;
        int i=0;
        while(j<n){
            sum+=nums[j];
            while(sum>=target){
                min_index=min(min_index,j-i+1);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        return (min_index==INT_MAX)?0:min_index;
         
    }
};