d = {
    "a":1,
    "b":2,
    "c":3
}

m = d.pop("b")  # delete and return - 2

d["d"] = m


# d["d"] = d.pop("b") ----> in one line

print(d)