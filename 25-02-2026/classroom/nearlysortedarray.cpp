// search in nearly sorted array
#include<iostream>
#include<vector>
using namespace std;
int search(vector<int> & nums, int target){
       int s= 0 , e= nums.size()-1;
       while(s<=e){
              int mid = s+(e-s)/2;
              if(nums[mid]== target){
                        return mid;
              }
              if(mid-1>=s && nums[mid-1]== target){
                return mid-1;
              }
              if(mid+1<=e && nums[mid+1]== target){
                return mid+1;
              }
              if(nums[mid]> target){
                e = mid-2;
              }
              else{
                s= mid+2;
              }
       }
       return -1;
}
int  main(){
    vector<int> nums= {10, 3, 40, 20, 50, 80, 70};
    int target = 20;
    int index = search(nums, target);
    if(index != -1){
        cout<<"Element found at index: "<<index<<endl;
    }
    else{
        cout<<"Element not found in the array."<<endl;  
    }
}