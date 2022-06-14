x = input()
y = input()
c = int(input())
if c == 1:
    print(y+x)
else:
    temp1 = x[:c-1]
    temp2 = x[c-1:]
    print(temp1+y+temp2)
