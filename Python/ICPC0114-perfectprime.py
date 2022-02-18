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


def sum_all_num(s):
    sum = 0
    for i in s:
        sum += int(i)
    return sum


def process(s):
    n = int(s)
    revN = int(s[::-1])
    sum = sum_all_num(s)
    if is_prime(n) == True and is_prime(revN) == True:
        if is_prime(sum) == True:
            for i in s:
                if is_prime(int(i)) == False:
                    return False
            return True
    return False


testCase = int(input())
while testCase > 0:
    s = str(input())
    if process(s) == True:
        print("Yes")
    else:
        print("No")
    testCase -= 1
