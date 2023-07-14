class Solution:
    def hammingWeight(self, n: int) -> int:
        count=0                                 #flag to count the number of 1 occurences
        while n:                                #This loop until the condition is falsified (n becomes 0, false)
            count=count+n%2                     #Increases count if we encounter one as (1%2=1), no increment if 0
            n=n>>1                              #BitWise Right-Shift
        return count