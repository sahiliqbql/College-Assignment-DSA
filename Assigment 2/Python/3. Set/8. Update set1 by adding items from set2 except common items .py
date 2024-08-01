
s1 = {1,2,3,4,5,6}
s2 = {4,5,6,7,8,9}

c = s1.intersection(s2)

add = s2 - c

for i in add:
    s1.add(i)

print(s1)
