
s1 = {1,2,3,4,5}
s2 = {3,4,5,6,7}

c = s1.intersection(s2)

r = s1 - c

s1 = s1 - r

print(s1)