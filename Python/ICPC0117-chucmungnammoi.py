testCase = int(input())
arr = []
while testCase > 0:
    s = str(input())
    if s not in arr:
        arr.append(s)
    testCase -= 1
print(len(arr))
