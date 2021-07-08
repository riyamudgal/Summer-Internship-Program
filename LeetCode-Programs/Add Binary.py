class Solution:
    def addBinary(self, a: str, b: str) -> str:
        sum = bin(int(a, 2) + int(b, 2))
        return sum[2:]
      
      
#Here first binary number is converted into Decimal number using int(), that take two arguments; 
# 1.A number or string to be converted to integer
#2. A number representing the number format

#then addition in performed between the numbers, and then the result is converted into binary using binary function bin()

## removing "0b" prefix; sum[2:]
