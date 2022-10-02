// leetcode question link :- https://leetcode.com/problems/majority-element/
// difficulty level :- easy
// time complexity :- O(n)
// space complexituy :- O(1)


import java.util.HashMap;
import java.util.Map;

class Solution {
    public int majorityElement(int[] nums)
    {
        HashMap<Integer, Integer> hm=new HashMap<>();
        int n= nums.length;
        int majority=n/2;
        for(int i=0;i<n;i++)
        {
            
            hm.compute(nums[i],(key,value)->(value==null)? 1 :value+1);  
            if (hm.get(nums[i])>majority) 
            {
                return nums[i];
            }
            
        }
        return 0;
                
    }
}
