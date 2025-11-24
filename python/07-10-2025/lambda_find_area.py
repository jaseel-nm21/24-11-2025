square=lambda a:a*a
rectangle=lambda l,w:l*w
triangle=lambda b,h:(h/b)*2

sq=int(input("enter the side of square to find area :"))
print("AREA of square is :",square(sq),"\n")

l=int(input("enter the length of rectangle :"))
w=int(input("enter the width of rectangle :"))
print("AREA of rectangle is :",rectangle(l,w),"\n")

b=int(input("enter the base of triangle :"))
h=int(input("enter the height of triangle :"))
print("AREA of triangle is : ",triangle(b,h),"\n")
