import math

def reserve_number(n):
    ans = 0
    while n > 0:
        ans = ans * 10 + n % 10
        n //= 10
    return ans

testCase = int(input())
while testCase > 0:
    n1 = int(input())
    n2 = reserve_number(n1)
    if math.gcd(n1, n2) == 1:
        print("YES")
    else:
        print("NO")
    testCase -= 1