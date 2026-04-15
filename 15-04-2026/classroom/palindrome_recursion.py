# writing a program to check if the string is palindrome using recursion
from sympy import true


def is_palindrome(s):
    if len(s)<= 1:
        return True
    if s[0]!= s[-1]:
        return False
    return is_palindrome(s[1:-1])

string = input("Enter a string: ")
if is_palindrome(string):
    print(f"{string} is a palindrome.")
else: 
    print(F"{string} is not a palindrome.")