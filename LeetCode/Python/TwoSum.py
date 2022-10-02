class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        diff = 0
        for i in range(len(nums)):
            diff = target - nums[i]
            if diff in nums:
                idx = nums.index(diff)
                if i!=idx:
                    return [i,idx]
