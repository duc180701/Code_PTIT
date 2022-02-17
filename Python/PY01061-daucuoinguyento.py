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
    if is_prime(int(s[-3:])) == True and is_prime(int(s[:3])) == True:
        print("YES")
    else:
        print("NO")
    testCase -= 1