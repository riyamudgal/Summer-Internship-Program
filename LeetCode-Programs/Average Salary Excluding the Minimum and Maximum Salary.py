class Solution:
    def average(self, salary: List[int]) -> float:
        summ=0
        salary.sort()
        for i in range(1,len(salary)-1):
            summ=summ+salary[i]
        n=len(salary)-2
        avg=summ/n
        return avg
