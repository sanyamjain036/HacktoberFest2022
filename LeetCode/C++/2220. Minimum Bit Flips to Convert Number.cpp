class Solution {
public:
    int minBitFlips(int start, int goal) {
        int mask = start ^ goal;
        int count = 0;
        while(mask != 0){
            int temp = mask;
            if(temp & 1 == 1){
                count++;
            }
            mask = mask >> 1;
        }
        return count;
    }
};


/*
CODE EXPLANATION : 
We will Use bit manipulation for this solution.

APPROACH :
First Part : we will find the number of different bits in both the numbers. This can be done by using the XOR(^) operation.
XOR operation working : If we XOR two different numbers then the output will be 1 else the output would be 0.
i.e 1 ^ 1 = 0 (as both are same)
1 ^ 0 = 1 (as both are different)

So if we apply this logic with two numbers then we will get :
eg : if a = 9 (i.e 1001) and b = 4 (i.e 0100).
a = 9 => 1 0 0 1
b = 4 => 0 1 0 0 (^)
output : 1 1 0 1

so we got 3 ones in output this means there are three different bits in 9 and 4 (binary representation)
we will store this in a variable named as mask.

Second Part : counting the number of 1's.
To do this we can run a while loop until the number is zero.
we will store the mask in temporary variable temp and then check if temp's last number is 1(using AND operator) if it is 1 then we
will increase the count and then right shift mask.
(working of AND (&) operator : AND gives 1 if both the inputs are 1 i.e 1 & 1 = 1)
SO coming back to the question if we do temp & 1 then if we get 1 as an output then we will simply increase the count)

TEST CASE
start = 3 (0011)
goal = 10 (1010)

(different bits = 2 so answer should also be 2)

step 1 : mask = start ^ goal (mask = 0011 ^ 1010)
[mask = 1001]

step 2 : while(mask !=0) [mask = 1001]
temp = mask (temp = 1001)
if(temp & 1 == 1) [true as 1001 & 1 = 1]
count++; [count = 1]
mask = mask >> 1; [mask = 0100]

step 3 : while(mask !=0) [mask = 0100]
temp = mask (temp = 0100)
if(temp & 1 == 1) [false as 0100 & 1 = 0]
mask = mask >> 1; [mask = 0010]

step 4 : while(mask !=0) [mask = 0010]
temp = mask (temp = 0010)
if(temp & 1 == 1) [false as 0010 & 1 = 0]
mask = mask >> 1; [mask = 0001]

step 5 : while(mask !=0) [mask = 0001]
temp = mask (temp = 0001)
if(temp & 1 == 1) [true as 0001 & 1 = 1]
count++; [count = 2]
mask = mask >> 1; [mask = 0000]

Hence final answer would be 2.
*/