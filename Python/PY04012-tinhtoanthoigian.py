from decimal import ROUND_HALF_UP, Decimal
import decimal
from fractions import Fraction


class HS():
    def __init__(self, ma, name, time, kq):
        self.ma = ma
        self.name = name
        self.time = time
        self.kq = kq

    def total(self):
        print(self.ma, self.name, self.kq)


n = int(input())
L = []

for i in range(n):
    id = input()
    name = ' '.join(input().split()).strip().title()

    if True:
        tmp = input().split(':')
        start = int(tmp[0]) * 60 + int(tmp[1])
    if True:
        tmp = input().split(':')
        end = int(tmp[0]) * 60 + int(tmp[1])
    time = end - start

    kq = str(time // 60) + ' gio ' + str(time % 60) + ' phut'

    L.append(HS(id, name, time, kq))

l = sorted(L, key=lambda x: (- x.time))
for hs in l:
    hs.total()
