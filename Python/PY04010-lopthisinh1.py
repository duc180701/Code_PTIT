class ThiSinh:
    def __init__(self, name, date_of_birth, point_1, point_2, point_3):
        self.name = name
        self.date_of_birth = date_of_birth
        self.point_1 = point_1
        self.point_2 = point_2
        self.point_3 = point_3
        self.sum_point = point_1 + point_2 + point_3

    def show(self):
        print(f"{self.name} {self.date_of_birth} {round(self.sum_point, 1)}")


fullname = str(input())
dob = str(input())
point1 = float(input())
point2 = float(input())
point3 = float(input())
person = ThiSinh(fullname, dob, point1, point2, point3)
person.show()
