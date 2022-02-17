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
    x = (len(str(n))) // 2
    if str(n)[0:int(x)] == str(n)[-int(x):]:
        return True
    return False

testCase = int(input())
while testCase > 0:
    n = int(input())
    for i in range(n):
        if revNum(i) == True:
            if allIsEven(i) == True:
                print(i, end = " ")
    print()
    testCase -= 1