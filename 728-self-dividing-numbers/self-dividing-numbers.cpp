class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for(int i=left;i<=right; i++){
            int temp=i;
            bool selfdividing=true;
            while(temp>0){
                int digit=temp%10;
                if(digit ==0  || i % digit!=0){
                    selfdividing =false;
                    break;
                }
                temp/=10;
                
                }
                if(selfdividing){
                    res.push_back(i);
                
            }
            
        }
        return res;
        
    }
};