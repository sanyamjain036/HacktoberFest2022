class Solution:
    def mode(self,root,ans):
        if not root:
            return 
   
        if root.val not in ans:
            ans[root.val] = 1
        else:
            ans[root.val] += 1
        
        
        self.mode(root.left,ans)
        self.mode(root.right,ans)
        return ans
    
    def findMode(self, root: Optional[TreeNode]) -> List[int]:
        result=[]
        node_freq = self.mode(root,{})
        max_freq = max(node_freq.values())
       
        for key,val in node_freq.items():
            if val == max_freq:
                result.append(key)
        return result
                
        
