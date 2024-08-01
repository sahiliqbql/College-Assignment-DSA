
l = [1,2,3,5,6,7]

n = int(input("enter idx item: "))
v = int(input("enter item: "))

i = 0
while(l[i]!=n):
    i+=1

l.insert(i+1,v)

print(l)
