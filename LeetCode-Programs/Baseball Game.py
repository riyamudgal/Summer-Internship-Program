class Solution:
    def calPoints(self, ops: List[str]) -> int:
        new_list=[]
        for i in ops:
            if i=="+":
                new_list.append(new_list[len(new_list)-1]+new_list[len(new_list)-2])
            elif i=="D":
                new_list.append(2*new_list[len(new_list)-1])
            elif i=="C":
                new_list.pop()
            else:
                new_list.append(int(i))
        return sum(new_list)
