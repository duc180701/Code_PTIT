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

def sum_is_prime(s):
    sum = 0
    for i in s:
        sum += int(i)
    if is_prime(sum) == True:
        return True
    return False

def posi_even_is_even(s):
    for i in range(0, len(s), 2):
        if int(s[i]) % 2 != 0:
            return False
    return True

def posi_odd_is_odd(s):
    for i in range(1, len(s), 2):
        if int(s[i]) % 2 == 0:
            return False
    return True


testCase = int(input())
while testCase > 0:
    no = 1
    s = str(input())
    if posi_odd_is_odd(s) == True:
        if posi_even_is_even(s) == True:
            if sum_is_prime(s) == True:
                print("YES")
                no = 0
    if no == 1:
        print("NO")
    testCase -= 1