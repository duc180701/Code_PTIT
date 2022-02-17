from itertools import count
import math


def is_prime(n):
    if n == 2 or n == 3:
        return True
    else:
        for i in range(2, int(math.sqrt(n)) + 1):
            if n % i == 0:
                return False
        return True


testCase = int(input())
while testCase > 0:
    n = int(input())
    ans = "1"
    j = 2
    while n > 1:
        if is_prime(j) == True and n % j == 0:
            cnt = 0
            while n % j == 0:
                cnt += 1
                n //= j
            ans += " * " + str(j) + "^" + str(cnt)
        else:
            j += 1
    print(ans)
    testCase -= 1
