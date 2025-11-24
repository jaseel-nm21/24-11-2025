width=int(input("enter the width : "))
length=int(input("enter the length : "))

def findarea(a,b):
    area=a*b
    print("area of rectangle is :" ,area)

def findperimeter(a,b):
    perimeter=2*(a*b)
    print("perimeter of rectangle is :" ,perimeter)


findarea(width,length)
findperimeter(width,length)
    
