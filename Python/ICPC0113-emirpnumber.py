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
    s = str(n)[::-1]
    if int(s) != n:
        if is_prime(n):
            if is_prime(int(s)):
                return True
    return False


testCase = int(input())
while testCase > 0:
    d = []
    for i in range(100001):
        d.append(0)
    ans = []
    n = int(input())
    for i in range(13, n):
        if d[i] == 0:
            if check(i) == True and int(str(i)[::-1]) < n:
                ans.append(int(i))
                ans.append(int(str(i)[::-1]))
                d[i] += 1
                d[int(str(i)[::-1])] += 1
    for i in range(len(ans)):
        print(ans[i], end=" ")
    print()
    testCase -= 1
