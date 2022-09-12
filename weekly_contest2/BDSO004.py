# Python3 implementation of the above approach
 
# To store fibonacci numbers 42 second
# number in fibonacci series largest
# possible integer
fib = [0] * 43
 
# Function to generate fibonacci
# series
def fibonacci():
 
    fib[0] = 1
    fib[1] = 2
    for i in range(2, 43):
        fib[i] = fib[i - 1] + fib[i - 2]
 
# Recursive function to return the
# number of ways
def rec(x, y, last):
 
    # base condition
    if y == 0:
        if x == 0:
            return 1
        return 0
     
    Sum, i = 0, last
     
    # for recursive function call
    while i >= 0 and fib[i] * y >= x:
        if fib[i] > x:
            i -= 1
            continue
        Sum += rec(x - fib[i], y - 1, i)
        i -= 1
         
    return Sum
 
# Driver code
if __name__ == "__main__":
    i = int(input())
    while i>0:
        fibonacci()
        n = tuple(input()),
        k = tuple(input())
        print("Possible ways are:", rec(n, k, 42))
        i-=1
# This code is contributed
# by Rituraj Jain