a=[1,3,50,60,70]
b=[3,89,4,1,60]

alen=len(a)
blen=len(b)
#q1
if alen == blen:
    print("both list have same length \n")

else:
    print("not same length \n")

#q2
re1=0
re2=0
i=0

for i in a:
    re1=re1+i

 
i=0
for i in b:
    re2=re2+i

re3=re1+re2

print("sum of 1st list",re1)
print("sum of 2nd list",re2)
print("sum of both list",re3,"\n")


#q3
j=0
u=0

for u in a:
    for j in b:
        if (u==j):
            print("element",u,"have in both list")



