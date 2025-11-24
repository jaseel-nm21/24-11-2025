sr=input("enter a string")
temp=sr[0]
new=sr[0]+sr[1:len(sr)].replace(temp,"$")

print(new)
        
