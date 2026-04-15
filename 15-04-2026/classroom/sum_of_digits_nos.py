# write a code to find the sum of digits of a number
# take input from the user
# example: 1234 -> 1+2+3+4 = 10
def sum_of_digits(n):
    if n==0:
        return 0
    else:
        return n%10 + sum_of_digits(n//10)


number = int(input("Enter a number: "))
result = sum_of_digits(number)
print(f"The sum of digits of {number} is {result}.")

