import re

n = [int(i) for i in input().split()]
res = []
while n[0] > 0:
    val = input()
    val = val.lower()
    val = val.replace("_", " ")
    num = re.findall(r"[\w']+", val)
    res += num
    n[0] -= 1
res.sort()
d = dict({})
for i in res:
    if i in d:
        d.update({i: d[i]+1})
    else:
        d.update({i: 1})
d = dict(sorted(d.items(), key=lambda item: item[1], reverse=True))
for k in d:
    if d[k] >= n[1]:
        print(str(k)+" "+str(d[k]))
