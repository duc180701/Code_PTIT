val = input()
l = int(input())
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
c = 0
pop = []
for k in d:
    if d[k] >= l:
        pop.append(k)
        c = 1
pop.sort()
if c == 0:
    print("NOT FOUND")
else:
    for i in pop:
        print(str(i)+" "+str(d[i]))
