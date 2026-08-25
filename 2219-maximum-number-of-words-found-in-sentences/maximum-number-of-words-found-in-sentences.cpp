class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max_words=0;
        for(int i=0; i<sentences.size(); i++){
            int words=1;
            for(char ch:sentences[i]){
                if(ch==' '){
                    words++;
                }
        
            }
        max_words=max(max_words,words);    

        }
    return max_words;    
    }
};