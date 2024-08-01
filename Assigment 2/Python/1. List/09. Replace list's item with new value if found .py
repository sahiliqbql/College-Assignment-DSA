l = [1,2,3,99,5,6]

n = int(input("enter item to replace: "))
v = int(input("enter value: "))

for i in range(len(l)):
    if(l[i]==n):
        l[i] = v

print(l)
