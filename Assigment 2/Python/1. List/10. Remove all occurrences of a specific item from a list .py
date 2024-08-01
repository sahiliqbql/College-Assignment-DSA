l = [1,2,3,4,4,5,6,4,9]

n = int(input("enter item: "))

while(n in l):
    l.remove(n)

print(l)