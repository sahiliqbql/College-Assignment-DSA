
d = {
    "a":2,
    "b":1,
    "c":3
}

min = "a"

for i in d.keys():
    if(d[i]<d[min]):
        min = i

print(min)
