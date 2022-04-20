import math


class Decimal:
    value: float

    def __init__(self, a):
        self.value = float(a)


class Point:
    x: Decimal
    y: Decimal

    def __init__(self, x, y):
        self.x = x
        self.y = y

    def distance(self, p):
        ans = math.sqrt(math.pow(self.x.value - p.x.value, 2) +
                        math.pow(self.y.value - p.y.value, 2))
        return "{:.4f}".format(ans)


if __name__ == '__main__':
    t = int(input())
    while t > 0:
        arr = input().split()
        p1 = Point(Decimal(arr[0]), Decimal(arr[1]))
        p2 = Point(Decimal(arr[2]), Decimal(arr[3]))
        print(p1.distance(p2))
        t -= 1
