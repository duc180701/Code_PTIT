import math


def bin(a):
    res = 0
    for i in range(0, len(a)):
        if a[i] == "1":
            res += int(math.pow(2, len(a)-i-1))
    return str(res)


val = input()
res = ""
if(len(val) % 3 == 1):
    val = "00"+val
if(len(val) % 3 == 2):
    val = "0"+val
i = 0
while(i < len(val)):
    res += bin(val[i:i+3])
    i += 3
print(res)
