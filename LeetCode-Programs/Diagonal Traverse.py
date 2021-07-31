class Solution:
    def findDiagonalOrder(self, mat: List[List[int]]) -> List[int]:
        new_list=[]
        m=len(mat)
        n=len(mat[0])
        i=0
        j=0
        while i<m and j<n:
            if (i+j)%2==0: 
                new_list.append(mat[i][j])
                while 0<=i-1 and j+1<n:
                    
                    new_list.append(mat[i-1][j+1])
                    i=i-1
                    j=j+1
                if j+1<n: 
                    j=j+1
                else:
                    i=i+1
            elif (i+j)%2==1:
                
                new_list.append(mat[i][j])
                
                while i+1<m and 0<=j-1:
                    new_list.append(mat[i+1][j-1])
                    i=i+1
                    j=j-1
                if i+1<m: 
                    i=i+1
                else:
                    j=j+1
                    
        return new_list
