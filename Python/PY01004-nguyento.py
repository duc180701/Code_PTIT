import math

def is_prime(k):
    if k < 2:
        return False
    elif k == 2 or k == 3:
        return True
    else:
        for i in range(1, int(math.sqrt(k)) + 1):
            if n % i == 0:
                return False
        return True
            

def together_Primes(a, b):
    if math.gcd(a, b) == 1:
        return True
    return False

testCase = int(input())
while testCase > 0:
    n = int(input())
    if n < 2:
        print("NO")
    else:
        count = 0
        for i in range(1, n):
            if togetherPrimes(i, n):
                count += 1
        if is_prime(count) == True:
            print("YES")
        else:
            print("NO")
    testCase -= 1