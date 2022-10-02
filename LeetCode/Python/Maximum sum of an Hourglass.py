# Leetcode Weekly contest
class Solution:
    def maxSum(self, grid: List[List[int]]) -> int:
        s = 0
        maximum = 0
        for i in range(len(grid)-2):
            s = 0
            for j in range(len(grid[i])-2):
                top = grid[i][j:j+3] #top row of grid
                mid = grid[i+1][j+1] #mid element of grid
                bottom = grid[i+2][j:j+3] #bottom row of the grid
                
                s = sum(top)+mid+sum(bottom)
                maximum = max(s,maximum) 
        return maximum
