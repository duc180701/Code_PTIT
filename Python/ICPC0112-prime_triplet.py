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


def check(n):
    if is_prime(n) == True:
        if is_prime(n + 6) == True:
            if is_prime(n + 2) == True:
                return True
            elif is_prime(n + 4) == True:
                return True
    return False


testCase = int(input())
while testCase > 0:
    ans = 0
    n = int(input())
    if n < 14:
        print(0)
    else:
        j = 5
        while (j + 6) < n:
            if check(j) == True:
                ans += 1
            j += 1
        print(ans)
    testCase -= 1
