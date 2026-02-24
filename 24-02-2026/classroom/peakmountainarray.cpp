// find peak element in mountain array
#include <iostream>
#include <vector>
using namespace std;
int findPeakElement(vector<int>& nums) {
    int left = 0, right = nums.size() - 1;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] < nums[mid + 1]) {
            left = mid + 1; // Peak is in the right half
        } else {
            right = mid; // Peak is in the left half or at mid
        }
    }
    return left; // left and right will be the same at the end
}
int main() {
    vector<int> nums = {0,10,5,2};
    int peakIndex = findPeakElement(nums);
    cout << "Peak element is at index: " << peakIndex << " with value: " << nums[peakIndex] << endl;
    return 0;
}