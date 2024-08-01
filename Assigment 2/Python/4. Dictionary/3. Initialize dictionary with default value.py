
l = ["a","b","c"]

v = int(input("enter val: "))

d = {}

for i in l:
    d.update({i:v})

print(d)