
arr = [
    [0, 0, 3, 0, 4],
    [0, 0, 5, 7, 0],
    [0, 0, 0, 0, 0],
    [0, 2, 6, 0, 0]
]

r = len(arr)
c = len(arr[0])

z = 0
for i in range(r):
    for j in range(c):
        if(arr[i][j]==0):
            z+=1

if(z>((r*c)/2)):
    print("sparse matrix")
else:
    print("not")
    