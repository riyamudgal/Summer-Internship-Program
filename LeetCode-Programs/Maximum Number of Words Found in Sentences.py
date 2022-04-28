class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        max_word=0
        for i in range(len(sentences)):
            count=1
            word=sentences[i]
            for j in range(len(word)):
                if sentences[i][j]==' ':
                    count+=1
                max_word=max(max_word, count)
        return max_word
