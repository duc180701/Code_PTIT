s = str(input())

countCap = 0
countLow = 0

for i in s:
    if i >= "a" and i <= "z":
        countLow += 1
    elif i >= "A" and i <= "Z":
        countCap += 1

if countCap > countLow:
    print(s.upper())
else:
    print(s.lower())