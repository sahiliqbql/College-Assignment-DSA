a = b = s = 1
n = int(input("enter limit: "))
for i in range(1,n):
    s+=(b*b)
    t = a
    a = b
    b = t+b

print("sum =",s)