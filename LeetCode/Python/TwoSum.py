class Solution:
def twoSum(self, nums: List[int], target: int) -> List[int]:
    tmp = sorted(nums)
    n, i, j = len(nums), 0, (n-1)
    while True:
        s = tmp[i]+tmp[j]
        if s>target:
            j-=1
        elif s<target:
            i+=1
        else:
            break
    return [nums.index(tmp[i]),n-(nums[::-1].index(tmp[j]))-1]