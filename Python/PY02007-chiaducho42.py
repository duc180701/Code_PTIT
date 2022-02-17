arr = []
testCase = 10
while testCase > 0:
    _number = input()
    data = _number.split()
    arr += data
    testCase -= len(data)
for i in range(len(arr)):
    arr[i] = int(arr[i]) % 42
arr.sort()
ans = 0
for i in range(len(arr) - 1):
    if arr[i] != arr[i + 1]:
        ans += 1
print(ans + 1)
