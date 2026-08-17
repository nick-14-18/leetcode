class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int max_candies=candies[0];
        for(int i=0; i<candies.size(); i++){
            if(max_candies<candies[i]){
                max_candies=candies[i];
            }
        }
        for(int j=0; j<candies.size(); j++){
            if((candies[j]+extraCandies)>=max_candies){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        
    return result;  
    }

};