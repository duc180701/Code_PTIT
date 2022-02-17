def div_7(s):
    if len(s) == 1:
        sum = int(s)
    else:
        res = int(s[0])
        sum = 0
        for i in range(1, len(s)):
            sum = res * 3 + int(s[i])
            res = sum
    if sum % 7 == 0:
        return True
    return False


testCase = int(input())
while testCase > 0:
    n = int(input())
    if n % 7 == 0:
        print(n)
    else:
        s = str(n)
        revS = s[::-1]
        cnt = 0
        for i in range(1, 1001):
            cnt += 1
            x = str(int(s) + int(revS))
            if div_7(x) == True:
                break
            s = x
            revS = s[::-1]
        if cnt > 1000:
            print(-1)
        else:
            print(x)
    testCase -= 1
