// find pivot element in sorted array rotated
#include<iostream>
#include<vector>
using namespace std;
int findPivot(vector<int> & nums){
    int s= 0, e= nums.size()-1;
    while(s<e){
        int mid = s+(e-s)/2;
        if( nums[mid]> nums[mid+1]&& mid+1<nums.size()){
            return mid;
        }
        else if(nums[mid]< nums[mid-1] && mid-1>=s){
            return mid-1;
        }
        else if(nums[mid]> nums[s]){
            s= mid+1;
        }
        else{
            e= mid-1;
        }
    }
    return s;
}
int main(){
    vector<int> nums = {9,10,2,4,6,8};
    int pivotIndex = findPivot(nums);
    cout<<"Pivot element is at index: "<<pivotIndex<<" with value: "<<nums[pivotIndex]<<endl;
    return 0;
}

        