class Solution:
    def findLucky(self, arr: List[int]) -> int:
        new_list=[]
        for i in arr:
            count=0
            for j in arr:
                if i==j:
                    count=count+1
            if count==i:
                new_list.append(i)
                
        new_list.sort()
        if len(new_list)==0:
            return -1
        return new_list[len(new_list)-1]
