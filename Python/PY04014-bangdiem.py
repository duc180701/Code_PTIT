class ScoreBoard:
    def __init__(self, math, vnmese, lang, phys, chel, bio, his, geo, civic, tech):
        self.math = math
        self.vnmese = vnmese
        self.lang = lang
        self.phys = phys
        self.chel = chel
        self.bio = bio
        self.his = his
        self.geo = geo
        self.civic = civic
        self.tech = tech

    def mediumScore(self):
        return round((((self.math + self.vnmese) * 2 + self.lang + self.phys + self.chel
                      + self.bio + self.his + self.geo + self.civic + self.tech) / 12), 2)


arr = []
cnt = 1
students = []
testCase = int(input())
while(testCase > 0):
    if (cnt < 10):
        ms = "HS0" + str(cnt)
    else:
        ms = "HS" + str(cnt)
    cnt += 1
    name = str(input())
    point = [float(x) for x in input().split()]
    person = ScoreBoard(point[0], point[1], point[2], point[3],
                        point[4], point[5], point[6], point[7], point[8], point[9])
    mediumScore = person.mediumScore()
    arr.append(round(mediumScore, 1))
    if (mediumScore >= 9):
        academic = "XUAT SAC"
    elif (mediumScore >= 8 and mediumScore <= 8.9):
        academic = "GIOI"
    elif (mediumScore >= 7 and mediumScore <= 7.9):
        academic = "KHA"
    elif (mediumScore >= 5 and mediumScore <= 6.9):
        academic = "TB"
    else:
        academic = "YEU"
    student = {}
    student['code'] = ms
    student['fullname'] = name
    student['point'] = round(mediumScore, 1)
    student['academic'] = academic
    students.append(student)
    testCase -= 1

arr.sort(reverse=True)
for i in arr:
    for j in range(len(students)):
        k = students[j]
        if(k['point'] == i):
            for key in k.keys():
                print(k[key], end=" ")
            print()
            del students[j]
            break
