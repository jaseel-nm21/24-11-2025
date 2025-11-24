a = input("Enter line of words: ")
s = a.split()
l = len(s)
i = 0

while i < l:
    count = 0
    j = 0
    while j < l:
        if s[i] == s[j]:
            count += 1
        j += 1
    print(f"{s[i]} : {count}")
    i += 1

                
            
    





    
    
    
    
    
    
    
    

        


