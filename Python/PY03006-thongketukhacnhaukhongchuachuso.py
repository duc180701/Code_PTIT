import re

n = int(input())
res = []
while n > 0:
    val = input()
    val = val.lower()
    val = re.sub("\d", "", val)
    val = val.replace("_", " ")
    num = re.findall(r"[\w']+", val)
    res += num
    n -= 1
res.sort()
d = dict({})
for i in res:
    if i in d:
        d.update({i: d[i]+1})
    else:
        d.update({i: 1})
d = dict(sorted(d.items(), key=lambda item: item[1], reverse=True))
for key in d:
    print(str(key)+" "+str(d[key]))
