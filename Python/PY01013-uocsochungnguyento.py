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
    s = [int(x) for x in input().split()]
    g = math.gcd(s[0], s[1])
    ans = 0
    while g > 0:
        ans += g % 10
        g //= 10
    if is_prime(ans) == True:
        print("YES")
    else:
        print("NO")
    testCase -= 1