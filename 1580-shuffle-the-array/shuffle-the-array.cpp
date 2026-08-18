class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result;
        vector<int> arr1;
        vector<int> arr2;
        for(int i=0; i<n; i++){
            arr1.push_back(nums[i]);
        }
        for(int i=n; i<nums.size(); i++){
            arr2.push_back(nums[i]);
        }
        for(int i=0; i<n; i++){
            result.push_back(arr1[i]);
            result.push_back(arr2[i]);
        }
   
    return result;  
    }
};