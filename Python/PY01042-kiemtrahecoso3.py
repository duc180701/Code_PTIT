def process(s):
    for i in s:
        if i != "0" and i != "1" and i != "2":
            return False
    return True

testCase = int(input())
while testCase > 0:
    s = str(input())
    if process(s) == True:
        print("YES")
    else:
        print("NO")
    testCase -= 1