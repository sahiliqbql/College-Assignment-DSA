
d = {
    "a":1,
    "b":2,
    "c":3
}

k = ["a","b"]

nd = {}

for i in k:
    nd.update({i:d[i]})

print(nd)
