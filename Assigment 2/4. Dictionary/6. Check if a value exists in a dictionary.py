d = {
    "a":1,
    "b":2,
    "c":3
}

n = int(input("enter a value: "))

s=0

for i in d.values():
    if(i==n):
        print("present")
        s+=1
        break

if(s==0):
    print("not present")
    