def fib(limt):
    num1=0
    num2=1

    for i in range(limt):
        res=num1+num2
        print(res)
        num1=num2
        num2=res
               
limt=int(input("enter a number to find fibonacci series :"))

fib(limt)


