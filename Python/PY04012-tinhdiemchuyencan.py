class DiemDanh():
    def __init__(self, id, name, cls):
        self.id = id
        self.name = name
        self.cls = cls
        self.diem = 10
        self.note = ''

    def updateN(self, s):
        for i in s:
            if i == 'v':
                self.diem -= 2
            elif i == 'm':
                self.diem -= 1
        if self.diem <= 0:
            self.diem = 0
            self.note = 'KDDK'

    def printf(self):
        print(self.id, self.name, self.cls, self.diem, self.note)


n = int(input())
dic = {}
for i in range(n):
    id = input().upper().strip()
    name = input().strip().title()
    cls = input().upper().strip()
    dic.update({id: DiemDanh(id, name, cls)})

for i in range(n):
    s = input().strip().split()
    dic[s[0].upper()].updateN(s[1].lower())

for key, value in dic.items():
    value.printf()
