// https://leetcode.com/problems/validate-binary-search-tree/
// -----------------------------------------------------------
class Solution {
    public boolean helper(TreeNode root,  long max, long min ){
        if(root == null) return true;
        return root.val > min && root.val < max &&  helper(root.left,root.val,min) && helper(root.right,max,root.val);
        
    }
    public boolean isValidBST(TreeNode root) {
        long max = Integer.MAX_VALUE + 1L;
        long min = Integer.MIN_VALUE - 1L;
        return helper(root,max,min);
    }
}