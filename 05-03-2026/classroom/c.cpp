// An array is a data structure that stores elements of the same type in a contiguous block of memory. In an array, , of size , each memory location has some unique index,  (where ), that can be referenced as  or .

// Your task is to reverse an array of integers.

// Note: If you've already solved our C++ domain's Arrays Introduction challenge, you may want to skip this.

// Example

// Return .

// Function Description

// Complete the function  with the following parameter(s):

// : the array to reverse
// Returns

// : the reversed array
// Input Format

// The first line contains an integer, , the number of integers in .
// The second line contains  space-separated integers that make up .

// Constraints



// Sample Input 0
// 4
// 1 4 3 2

// Sample Output 0
// 2 3 4 1

#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> reverseArray(vector<int> a) {
        int n = a.size();
        vector<int> reversed(n);
        
        for (int i = 0; i < n; i++) {
            reversed[i] = a[n - 1 - i];
        }
        
        return reversed;
    }
};
