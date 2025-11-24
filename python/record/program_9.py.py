def rev(num):
    while (num!=0):
        su=num%10
        print(su)
        num=num//10


num=int(input("enter a number minimum 4 digits :"))

if (num<1000):
    print("you not entered 4 digits number")
    num=int(input("enter a number minimum 4 digits :"))


rev(num)
        

    
