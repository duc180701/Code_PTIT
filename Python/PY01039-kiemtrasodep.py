def near_dif(s):
    for i in range(1, len(s)):
        if s[i] == s[i - 1]:
            return False
    return True

def unit_equal(s):
    for i in range(2, len(s)):
        if s[i] != s[i - 2]:
            return False
    return True

testCase = int(input())
while testCase > 0:
    n = int(input())
    s = str(n)
    if near_dif(s) == True and unit_equal(s) == True:
        print("YES")
    else:
        print("NO")
    testCase -= 1