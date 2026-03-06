Sample-1: Easy 
You have an array A of integers with n elements. There are q queries to 
process and each query consists of four integers: l, r, x, and y. 
For the subarray of A ranging from index l to r, you need to assign a 
sequence of integers for each subsequent element. 
The sequence should start from x and increase by y. This means: 
• A[l] will be assigned the value of x. 
• A[l+1] will be assigned the value of x + y. 
• A[l+2] will be assigned the value of x + 2*y. 
• Continuing this pattern, A[l+i] will be assigned the 
value of x + i*y, where i ranges from 0 to (r - l). Find the sum of all 
integers in A after processing all queries. 
Since the answer can be large, return it modulo 109 +7. 
Input Format 
1. The first line contains an integer, n, denoting the 
number of elements in A. 
2. Each line i of the n subsequent lines (where 0 ≤ i < n) 
contains an integer describing A[i]. 
3. The next line contains an integer, q, denoting the 
number of rows in queries. 
4. Each line i of the q subsequent lines (where 0 ≤ i < q)