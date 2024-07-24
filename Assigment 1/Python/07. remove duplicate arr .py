arr = [1,2,3,3,4,5,6]

seen = set()
ans = []

for val in arr:
    if val not in ans:
        seen.add(val)
        ans.append(val)

print(ans)
