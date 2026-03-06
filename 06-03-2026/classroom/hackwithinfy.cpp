#include<iostream>
#include<vector>
using namespace std;
class solution{
    public:
    vector<int> sumQuery(vector<int>& nums){
     int n= nums.size();
     int x, y;
     cout<< "Enter the values of x and y: ";
        vector<int> prefix(n);
        prefix[0]= nums[0];
        for(int i=1; i<n; i++){
            prefix[i]= x + (i*y);
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
    int n, q, x, y;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout<< "Enter the values of x and y: ";
         cin>> x>> y;
    vector<int>nums(0);
    cout<< "Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>> nums[i];
        cout<< "Enter the number of queries: ";
    cin>> q;
    }
    cout<< "Enter the number of queries: ";
    cin>> q;
    solution s;
    vector<int>prefix= s.sumQuery(nums);
    for(int i=0; i<q; i++){
        int l, r;
        cout<< "Enter the range (l r): ";
        cin>> l>> r;
        //  cout<< "Enter the values of x and y: ";
        //  cin>> x>> y;
        int sum= s.rangeSum(prefix, l, r);
        cout<< "Sum of the range ["<< l<< ", "<< r<< "] is: "<< sum<< endl;
    }
}