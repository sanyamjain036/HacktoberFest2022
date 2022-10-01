class Solution {
public:
    int findPeakElement(vector<int>& arr){
     
        int start  =0, end = arr.size()-1;
        
        if(end==0) return 0;
        
        while(start<=end){
            int mid = start +(end-start)/2;
            
            
            if(mid==0){
                if(arr[mid]>arr[mid+1]) return mid;
                
            }
            else if(mid==arr.size()-1){
                if(arr[mid]>arr[mid-1]) return mid;
            }
            else {
                if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) return mid;
            }
            
            
            if(mid==0) start = mid+1;
            else if(mid==arr.size()-1) end = mid-11;
            else{
                if(arr[mid]>arr[mid-1]) start = mid+1;
                else end = mid-1;
            } 
        }
        
        return -1;
    }
};