# The guess API is already defined for you.
# @param num, your guess
# @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
# def guess(num: int) -> int:

class Solution:
    def guessNumber(self, n: int) -> int:
        start, end= 1, n
        while start<=end:
            mid= start+ (end-start)//2
            ans= guess(mid)
            if ans==0:
                return mid
            elif ans>0:
                start= mid+1
            else:
                end= mid-1
        return -1
