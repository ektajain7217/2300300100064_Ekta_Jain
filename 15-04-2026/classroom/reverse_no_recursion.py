# write a code to reverse a number using recursion
# example: 1234 -> 4321
def reverse_number(n, rev=0):
    if n ==0:
        return rev
    else:
        rev = rev*10 + n%10
        return reverse_number(n//10, rev)
    
number = int(input("Enter a number: "))
result = reverse_number(number)
print(f"the reverse of {number} is {result}.")
    