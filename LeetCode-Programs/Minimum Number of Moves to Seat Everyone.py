class Solution:
    def minMovesToSeat(self, seats: List[int], students: List[int]) -> int:
        seats.sort()
        students.sort()
        summ=0
        for i in range(len(seats)):
            summ=summ+abs(students[i]-seats[i])
        return summ
