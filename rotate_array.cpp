/*
Given an array, rotate the array to the right by k steps, where k is non-negative.
Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]



Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]

Constraints:

1 <= nums.length <= 105
-231 <= nums[i] <= 231 - 1
0 <= k <= 105
 







*/




#include<iostream>
using namespace std;
/* function which left rotate the array by D places */
void leftRotateByD(int *arr,int n,int d)
{
  /* storing 1st D elements in temporary array */
  int temp[d];
  for (int i=0;i<d;i++)
  {
    temp[i]=arr[i];
  }
  
  /* shifting remaining elements of the array */
  int x=0;
  for(int j=d;j<n;j++)
  {
    arr[x]=arr[j];
    x++;
  }
  
  /* storing back the D elements to the orignal array */
  x=0;
  for (int k=n-d;k<n;k++)
  {
    arr[k]=temp[x];
    x++;
  }
  
}
  
int main()
{
  int n,d;
  
  cout<<"Enter the size of array\n";
  cin>>n;
  
  int arr[n];
  cout<<"Enter the elements of array\n";
  for (int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  
  cout<<"Enter the value of D\n";
  cin>>d;
  
  /* function call to rotate the array */
  leftRotateByD(arr,n,d); 
    
  cout<<"Array after left rotation by D places\n";
  for (int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  
  
  return 0;
}