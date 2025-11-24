std ={
    "name" : "abu",
    "roll num" : "84",
    "register num" : "98678",
    "department" : "computer application",
    "semester" : "s4"
    }

mark=int(input("enter your total mask"))

if (mark>=90):
    grade="A"
elif (mark>=82):
    grade="B"
elif (mark>=75):
    grade="C"
elif (mark>=60):
    grade="D"
elif (mark>=50):
    grade="P"
else:
    grade="F"

std["grade"]= grade
std["total mark"]= mark
std.pop("roll num")
print(std)
    

