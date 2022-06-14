val = input()
res = []
for i in range(0, len(val), 2):
    if i+1 < len(val):
        s = ""
        s += (val[i]+val[i+1])
        res.append(int(s))
d = dict({})
for i in res:
    if not i in d:
        d.update({i: res.count(i)})

for k in d:
    print(str(k)+" "+str(d[k]))
