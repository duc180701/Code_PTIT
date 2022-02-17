import math

primes = [2, 3, 5, 7]

def is_prime(n):
    if n < 2:
        return False
    elif n == 2 or n == 3:
        return True
    else:
        for i in range(2, int(math.sqrt(n)) + 1):
            if n % i == 0:
                return False
        return True

def process(s):
    for i in range(len(s)):
        if is_prime(i) == True:
            if int(s[i]) not in primes:
                return False
        else:
            if int(s[i]) in primes:
                return False
    return True

testCase = int(input())
while testCase > 0:
    s = str(input())
    if process(s) == True:
        print("YES")
    else:
        print("NO")
    testCase -= 1