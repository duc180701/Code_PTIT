import math


class PhanSo:
    def __init__(self, ts, ms):
        self.ts = ts
        self.ms = ms

    def rutGon(self):
        while(True):
            tmp = math.gcd(self.ts, self.ms)
            if (tmp != 1):
                self.ts = int(self.ts / tmp)
                self.ms = int(self.ms / tmp)
            else:
                break

    def tinhTong(self, ps):
        uocChung = math.gcd(self.ms, ps.ms)
        boiChung = int((self.ms / uocChung) * ps.ms)
        ansMS = boiChung
        ansTS = self.ts * int(boiChung / self.ms) + \
            ps.ts * int(boiChung / ps.ms)
        return PhanSo(ansTS, ansMS)

    def show(self):
        print("{}/{}".format(self.ts, self.ms))


arr = input().split()
ps1 = PhanSo(int(arr[0]), int(arr[1]))
ps2 = PhanSo(int(arr[2]), int(arr[3]))
ans = ps1.tinhTong(ps2)
ans.rutGon()
ans.show()
