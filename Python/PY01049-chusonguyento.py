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

testCase = int(input())
while testCase > 0:
    s = str(input())
    countPrime = 0
    countNotPrime = 0
    if is_prime(len(s)) == True:
        for i in s:
            if is_prime(int(i)) == True:
                countPrime += 1
            else:
                countNotPrime += 1
        if countPrime > countNotPrime:
            print("YES")
        else:
            print("NO")
    else:
        print("NO")
    testCase -= 1