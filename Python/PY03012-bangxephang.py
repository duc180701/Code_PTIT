class SinhVien():
    def __init__(self, name, tasks, submit):
        self.name = name
        self.tasks = tasks
        self.submit = submit

    def printf(self):
        print(self.name, self.tasks, self.submit)


n = int(input())
L = []
for i in range(n):
    name = input()
    tasks, submit = map(int, input().split())
    L.append(SinhVien(name, tasks, submit))

L = sorted(L, key=lambda x: (-x.tasks, x.submit, x.name))
for i in L:
    i.printf()
