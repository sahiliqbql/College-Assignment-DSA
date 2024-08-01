
t = (1,2,3,99,5,6)

l = list(t)

n = int(input("enter idx to replace: "))
v = int(input("enter value: "))

l[n] = v

mt = tuple(l)

print(mt)
