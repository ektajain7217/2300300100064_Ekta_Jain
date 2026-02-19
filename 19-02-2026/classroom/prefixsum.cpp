#include<iostream>
#include<vector>
using namespace std;
class sloution{
    public:
    vector<int> prefixSum(vector<int>& nums)
    {
        int n= nums.size();
        vector<int>prefix(n);
        prefix[0]= nums[0];
        for(int i=1; i<n; i++){
            prefix[i]= prefix[i-1]+ nums[i];
        }
        return prefix;
    }
};
int main(){
    vector<int>nums={2,4,6,8,10};
    sloution s;
    vector<int>prefix= s.prefixSum(nums);
    for(int i=0; i<prefix.size(); i++){
        cout<<prefix[i]<<" ";
    }
    return 0;
}