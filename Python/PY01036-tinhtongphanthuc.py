testCase = int(input())
while testCase > 0:
    n = int(input())
    j = 0;
    if n % 2 == 0:
        j = 2
    else:
        j = 1
    sum = 0.0
    for i in range(j, n + 1, 2):
        sum += (1/i)
    print('{0:{1}f}'.format(sum, 6))
    testCase -= 1