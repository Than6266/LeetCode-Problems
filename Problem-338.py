class Solution:
    def countBits(self, n: int) -> List[int]:
        ans=[0]                                 #array creation, initialized with zero as 0 has no binary 1's
        for i in range(1,n+1):                  #Traversing till (n+1) (given condition)
            if i%2==1:                          #checking for
                ans.append((ans[i-1]+1))
            else:
                ans.append(ans[i // 2])         #new concept(for me) Floor Division
        return ans
