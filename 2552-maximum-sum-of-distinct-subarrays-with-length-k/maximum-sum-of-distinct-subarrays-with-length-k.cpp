class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
       long sum=0,ans=0;
       
       unordered_map<int,int> mp;
       int dups=0;

       for(int i=0; i<k; i=i+1){
        mp[nums[i]]++;
        if(mp[nums[i]]==2){
            dups++;

        }
        sum+=nums[i];
        
        }
        if(dups==0){
            ans=sum;
        }
        for(int i=k; i<nums.size(); i++){
            int add=nums[i];
            int remove=nums[i-k];

            mp[add]++;
            if(mp[add]==2){
                dups++;
            }
            sum+=add;

            if(mp[remove]==2){
                dups--;
            }
            mp[remove]--;
            sum=sum-remove;
            if(dups==0){
                ans=max(ans,sum);
            }
        }
       return ans;
    }
};