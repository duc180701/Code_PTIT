def div_10(n):
    sum = 0
    while n > 0:
        sum += n % 10
        n //= 10
    if sum % 10 == 0:
        return True
    return False

def dif_2_unit(n):
    s = str(n)
    for i in range(0, len(s) - 1):
        if abs(int(s[i]) - int(s[i + 1])) != 2:
            return False
    return True

testCase = int(input())
while testCase > 0:
    n = int(input())
    if div_10(n) == True and dif_2_unit(n) == True:
        print("YES")
    else:
        print("NO")
    testCase -= 1