def factorial(n):
    if n == 1 or n == 0:
        return 1
    return factorial(n - 1) * n


testCase = int(input())
while testCase > 0:
    s = str(input())
    sum = 0
    for i in s:
        sum += factorial(int(i))
    if sum == int(s):
        print("Yes")
    else:
        print("No")
    testCase -= 1
