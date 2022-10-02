# Leetcode Weekly contest

class Solution:
    def commonFactors(self, a: int, b: int) -> int:
        mini = min(a,b)
        count = 0
        for i in range(1,mini+1):
            if a%i == b%i == 0:
                count += 1
        return count
