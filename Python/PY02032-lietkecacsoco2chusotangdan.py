val = input()
res = []
for i in range(0, len(val), 2):
    if i+1 < len(val):
        s = ""
        s += (val[i]+val[i+1])
        res.append(int(s))
s = set(res)
res = list(s)
res.sort()
for i in res:
    print(i, end=" ")
