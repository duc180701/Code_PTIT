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

    def show(self):
        print("{}/{}".format(self.ts, self.ms))


arr = input().split()
ps = PhanSo(int(arr[0]), int(arr[1]))
ps.rutGon()
ps.show()
