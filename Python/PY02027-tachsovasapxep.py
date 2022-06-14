num = int(input())
list1 = []
while num > 0:
    val = input()
    val += "!"
    i = 0
    while i < len(val):
        c = 1
        if val[i].isdigit():
            for j in range(i+1, len(val)):
                if val[j].isdigit():
                    c += 1
                else:
                    temp = int(val[i:i+c])
                    list1.append(temp)
                    break
        i += c
    num -= 1
list1.sort()
for i in list1:
    print(i)
