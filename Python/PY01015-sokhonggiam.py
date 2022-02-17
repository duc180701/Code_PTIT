testCase = int(input())
def check(s):
    for i in range(len(s) - 1):
        if s[i] > s[i + 1]:
            return False
    return True
while testCase > 0:
    s = str(input())
    if check(s) == True:
        print("YES")
    else:
        print("NO")
    testCase -= 1