import math

testCase = int(input())
while testCase > 0:
    s1 = str(input())
    s2 = str(input())
    print(math.gcd(int(s1), int(s2)))
    testCase -= 1