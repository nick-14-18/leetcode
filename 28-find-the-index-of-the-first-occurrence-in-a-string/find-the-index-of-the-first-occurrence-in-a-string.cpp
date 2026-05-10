class Solution {
public:
    int strStr(string haystack, string needle) {
        int x=haystack.size();
        int y=needle.size();
        if(y==0){
            return 0;
        }
        if(y>x){
            return -1;
        }
        for(int i=0; i<=x-y; i++){
            if(haystack.substr(i,y)==needle){
                return i;
            }
        }
        return -1;

        
    }
};