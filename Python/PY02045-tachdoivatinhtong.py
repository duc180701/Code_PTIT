def findSum(a, b):
    str1 = ""
    str2 = ""
    dem = 0
    for i in a:
        if i == "0":
            dem += 1
        else:
            break
    if dem >= len(a):
        str1 = "0"
    else:
        str1 = a[dem:len(a)]

    dem = 0
    for i in b:
        if i == "0":
            dem += 1
        else:
            break
    if dem > len(b):
        str2 = "0"
    else:
        str2 = b[dem:len(b)]
    if (len(str1) > len(str2)):
        t = str1
        str1 = str2
        str2 = t
    str = ""
    n1 = len(str1)
    n2 = len(str2)

    str1 = str1[::-1]
    str2 = str2[::-1]

    carry = 0
    for i in range(n1):
        sum = ((ord(str1[i]) - 48) +
               ((ord(str2[i]) - 48) + carry))
        str += chr(sum % 10 + 48)

        carry = int(sum / 10)

    for i in range(n1, n2):
        sum = ((ord(str2[i]) - 48) + carry)
        str += chr(sum % 10 + 48)
        carry = (int)(sum / 10)

    if (carry):
        str += chr(carry + 48)
    str = str[::-1]

    return str


a = input()
while len(a) > 1:
    n = len(a)
    a = findSum(a[0:int(n/2)], a[int(n/2):])
    print(a)
