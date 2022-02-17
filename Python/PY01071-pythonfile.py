def check_duoi_file(s):
    s1 = s.split(".")
    if s1[len(s1) - 1].lower() == "py":
        return True
    return False

s = str(input())
if check_duoi_file(s) == True:
    print("yes")
else:
    print("no")
    