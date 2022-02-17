from ast import Return
from itertools import count
import math

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

def leng_is_prime(s):
    if is_prime(len(s)) == True:
        return True
    return False

def num_prime_more(s):
    countPrime = 0
    countNotPrime = 0
    for i in s:
        if is_prime(int(i)) == True:
            countPrime += 1
        else:
            countNotPrime += 1
    if countPrime > countNotPrime:
        return True
    return False

testCase = int(input())
while testCase > 0:
    s = str(input())
    if leng_is_prime(s) == True and num_prime_more(s) == True:
        print("YES")
    else:
        print("NO")
    testCase -= 1