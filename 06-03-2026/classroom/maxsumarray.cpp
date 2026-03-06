// array of size n, find the maximum sum of a contiguous subarray of k size.
#include<iostream>
#include<vector>
using namespace std;
class solution{
    public:
    int maxSum(vector<int> &nums){
        int n = nums.size();
        int k;
        cout<< "Enter the size of subarray k: ";
        cin>> k;
        int max_sum =nums[0];
        for (int i= 0; i<k; i++){
            int sum=0;
            for(int j=i; j<i+k && j<n; j++){
                sum += nums[j];
            }
            max_sum = max(max_sum, sum);
        }
        return max_sum;   
    }
};

int main(){
    int n;
    cout<< "Enter the size of the array: ";
    cin>> n;
    cout<< "Enter the size of subarray k: ";
    int k;
    cin>> k;

    vector<int> nums(n);
    cout<< "Enter the elements of the array: ";
    for(int i = 0; i<n; i++){
        cin>> nums[i];
    }

    solution s;
    int result = s.maxSum(nums);
    cout<< "The maximum sum of a contiguous subarray is: "<< result<< endl;
}