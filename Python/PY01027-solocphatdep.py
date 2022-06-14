n = input()
tmp = 0
for i in n:

    if i != "6" and i != "8":
        tmp = 1
        break

    elif n.find("888") != -1:
        tmp = 1
if tmp == 0:
    print("YES")
else:
    print("NO")
