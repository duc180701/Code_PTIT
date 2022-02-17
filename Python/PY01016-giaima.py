testCase = int(input())
while testCase > 0:
    s = str(input())
    j = 0
    for i in range(1, len(s) + 1, 2):
        print(s[j] * int(s[i]), end = "")
        j += 2
    print()
    testCase -= 1