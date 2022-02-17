import re

testCase = int(input())
while testCase > 0:
    s = str(input())
    arrNum = re.findall(r'\d+', s)
    min = int(arrNum[0])
    for i in range(1, len(arrNum)):
        if int(arrNum[i]) > min:
            min = int(arrNum[i])
    print(min)
    testCase -= 1