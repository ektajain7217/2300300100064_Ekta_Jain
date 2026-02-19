// C++ program to demonstrate prefix sum and range sum query.
//Given an array of N integers, and q queries, each query consists
// of two indices l and r, return find the sum of the elements in the 
//range [l, r] (inclusive) for each query.


#include<iostream>
#include<vector>
using namespace std;
class sloution{
    public:
     vector<int> prefixSum(vector<int>& nums){
        int n= nums.size();
        vector<int>prefix(n);
        prefix[0]= nums[0];
        for(int i=1; i<n; i++){
            prefix[i]= prefix[i-1]+ nums[i];
        }
        return prefix;
    }
    int rangeSum(vector<int> &prefix, int l, int r){
        if(l>0){
            return prefix[r]- prefix[l-1];
        }
        else{
            return prefix[r];
        }
        }
    };
int main(){
    int n, q;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int>nums(n);
    cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }
    cout << "Enter the number of queries: ";
    cin >> q;
    sloution s;
    vector<int>prefix= s.prefixSum(nums);
    for(int i=0; i<q; i++){
        int l, r;
        cout << "Enter the range (l r): ";
        cin >> l >> r;
        int sum= s.rangeSum(prefix, l, r);
        cout << "Sum of the range [" << l << ", " << r << "] is: " << sum << endl;
    }
    return 0;
}

// PS C:\Users\Ekta Jain\OneDrive\Desktop\2300300100064_Ekta_Jain\19-02-2026\classroom> g++ -std=c++17 prefixsumquery.cpp -o prefixsumquery
// PS C:\Users\Ekta Jain\OneDrive\Desktop\2300300100064_Ekta_Jain\19-02-2026\classroom> .\prefixsumquery
// Enter the size of the array: 6
// Enter the elements of the array: 3 1 4 1 5 9
// Enter the number of queries: 3
// Enter the range (l r): 1 3
// Sum of the range [1, 3] is: 6
// Enter the range (l r): 0 2
// Sum of the range [0, 2] is: 8
// Enter the range (l r): 2 5
// Sum of the range [2, 5] is: 19
// PS C:\Users\Ekta Jain\OneDrive\Desktop\2300300100064_Ekta_Jain\19-02-2026\classroom> 