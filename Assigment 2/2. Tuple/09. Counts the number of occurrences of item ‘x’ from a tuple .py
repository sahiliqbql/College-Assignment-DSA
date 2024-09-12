
l = (1,2,2,3,4,5,6,6,6,7,8,9,9)

n = int(input("enter a num: "))

c = 0

for i in l:
    if(i==n):
        c+=1

print(f"{n} present {c} times")

