def have_3_num(s):
    if len(s) >= 3:
        return True
    return False

def process(s):
    j = 0
    for i in range(1, len(s)):
        if s[i] <= s[i - 1]:
            j = i
            break
    s1 = s[j:]
    for i in range(1, len(s1)):
        if s1[i] >= s1[i - 1]:
            return False
    return True

testCase = int(input())
while testCase > 0:
    n = int(input())
    s = str(n)
    if have_3_num(s) == True and process(s) == True:
        print("YES")
    else:
        print("NO")
    testCase -= 1