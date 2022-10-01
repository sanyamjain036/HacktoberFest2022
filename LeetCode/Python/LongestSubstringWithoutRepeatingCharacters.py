class Solution(object):
    def lengthOfLongestSubstring(self, s):
        
        if len(s) == 0:
            return 0
        
        max_length = start = 0
        hashmap = dict()
        
        for i, elem in enumerate(s):
            
            if elem in hashmap and start <= hashmap[elem]:
                start = hashmap[elem] + 1
            else:
                max_length = max(max_length, i - start + 1)
            hashmap[elem] = i
            
        return max_length
