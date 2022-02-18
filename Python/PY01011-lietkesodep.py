def allIsEven(n):
    for i in str(n):
        if int(i) % 2 != 0:
            return False
    return True


def div2res1(n):
    if len(str(n)) % 2 == 1:
        return True
    return False


def revNum(n):
    if int(str(n)[::-1]) == n:
        return True
    return False


def process(n):
    if revNum(n) == True:
        if allIsEven(n) == True:
            return True
    return False


testCase = int(input())
while testCase > 0:
    n = int(input())
    for i in range(22, n):
        if process(i) == True:
            print(i, end=" ")
    print()
    testCase -= 1
