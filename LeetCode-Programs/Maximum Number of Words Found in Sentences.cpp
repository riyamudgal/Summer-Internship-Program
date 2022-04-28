class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max_words=0;
        for(int i=0;i<sentences.size();i++){
            int count=1;
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j]==' ')
                    count++;
            }
            max_words=max(max_words, count);
        }
        return max_words;
        
    }
};
