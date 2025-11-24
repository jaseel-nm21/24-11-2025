
option=0

while(option!=4):
    print("\n")
    option=int(input("enter 1 for occurrences of word \nenter 2 for character frequency\nenter 3 for factors\nenter 4 for exit \n :"))

#1
    if option==1:
        given=input("enter a sentence to find word occurrences :")
        s=given.split()
        l=len(s)
        temp=[]
        i=0
        while i<l:
            if s[i] not in temp:
                count=0
                j=0
                while j<l:
                    if s[i] == s[j]:
                        count=count+1
                    j=j+1
                print(f"{s[i]} : {count}")
                temp.append(s[i])
            i=i+1
#2
    elif option==2:
        given2=input("enter a charater to find frequency :")
        charlist=list(given2)
        l2=len(charlist)
        i2=0
        temp2=list()
        while i2<l2:
            if charlist[i2] not in temp2:
                count2=0
                j2=0
                while j2<l2:
                    if charlist[i2] == charlist[j2]:
                        count2=count2+1
                    j2=j2+1
                print(f"{charlist[i2]} : {count2}")
            i2=i2+1
#3
    elif option==3:
        num=int(input("enter a number to find factors :"))

        for i in range(1, num + 1):  
            if num % i == 0:
                print(i)

#4
    elif option==4:
        print("exited")

            

        
    
        
        
    
        
                
                
    
    
