from math import pi


def factorial(x):

    if x == 0 or x == 1:
        return 1
    else:
        return x * factorial(x - 1)


def sine_x(x_deg, n):

    x = x_deg * pi / 180  
    sinex = 0
    factorialTerm = lambda i: ((-1)*i) * (x*(2*i + 1)) / factorial(2*i + 1)

    for i in range(n + 1):
        sinex += factorialTerm(i)

    return sinex

totalSum = 0

def recursive_sum(n):
    
    global totalSum
    if n == 0:
        return
    totalSum += n
    recursive_sum(n - 1)

# Tests
print(factorial(5))      # 120
sine_x(30, 5)            # approx 0.5
recursive_sum(5)
print(totalSum)             # 15
