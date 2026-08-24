class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int final_value=0;
        char x;
        for(int i=0; i<operations.size(); i++){
           if(operations[i]=="++X" || operations[i]=="X++"){
            final_value++;
           }
           else{
            final_value--;
           }
            
        }
        return final_value;
        
    }
};