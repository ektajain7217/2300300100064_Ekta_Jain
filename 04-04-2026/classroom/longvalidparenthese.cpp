// 32. Longest Valid Parentheses
// Given a string containing just the characters '(' and ')', return the length of the longest valid (well-formed) parentheses substring.
// Example 1:
// Input: s = "(()"
// Output: 2
// Explanation: The longest valid parentheses substring is "()".
// Example 2:
// Input: s = ")()())"
// Output: 4
// Explanation: The longest valid parentheses substring is "()()".
// Example 3:
// Input: s = ""
// Output: 0
// Constraints:
// 0 <= s.length <= 3 * 104
// s[i] is '(', or ')'.
#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int maxLength = 0;
        
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                st.push(i);
            } else {
                st.pop();
                if(st.empty()){
                    st.push(i);
                } else {
                    maxLength = max(maxLength, i - st.top());
                }
            }
        }
        
        return maxLength;
    }
};  

int main() {
    Solution sol;
    string s1 = "(()";
    string s2 = ")()())";
    string s3 = "";
    
    cout << sol.longestValidParentheses(s1) << endl; // Output: 2
    cout << sol.longestValidParentheses(s2) << endl; // Output: 4
    cout << sol.longestValidParentheses(s3) << endl; // Output: 0
    
    return 0;
}